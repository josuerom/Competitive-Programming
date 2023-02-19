/**
 * @solution problem: B. Tri-Color Puzzle
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#define TEST
typedef unsigned char BYTE;
/*
Theis solution is based on:
if c1, c2 and c3 are color codes with value in {0, 1, 2},
then c1, c2, c3 are all the same or all different if and only if c1 + c2 + c3 = 0 mod 3

we assign m_nVars variables in {0,1,2} to each of the
((m_triSize +1)* m_triSize)/2 cells and create
((m_triSize -1)* m_triSize)/2 equations corresponding to each
triplet of adjacent cells with one above and two below
we add and equation for each initial value
and tehen solve the resulting system of equations modulo 3
if there is no solution (rwo reduction yields 0 = non-zero)
there are no soltuions
otherwise there will be F "free variables which can take any
(of three) value(s) so there are 3^F total solutions
*/
#define MAX_TRI_SZ 19
#define MAX_VARS (((MAX_TRI_SZ+1)*MAX_TRI_SZ)/2)

BYTE m_varCoeffs[2*MAX_VARS][MAX_VARS+1]; // systme of equations to solve
BYTE m_initVals[MAX_VARS];	// which vatiable have inital vvalues
int m_triSize;	// number of cells on a side
int m_nVars;	// total number of cells
int m_nEqns;	// current numbe of equations (may change)	
int m_nFree;	// number of "free" variables
int m_nSolns;	// 0 or 3^m_nFree
int m_offsets[MAX_TRI_SZ+1]; // var Index of first cell in eachh row

/* convert 0-based row and column indices to a v0-based vaible index */
int VarIndex(int row, int col) {
	return m_offsets[row] + col;
}

// establecer las primeras ((m_triSize -1)* m_triSize)/2 ecuaciones
// para decir todos los triples de celdas adyacentes con uno arriba
// y dos abajo suman 0 mod 3
// Sand establece los valores iniciales en 0xff (no establecido)
void MakeBaseCoeffs() {
	int i, j, k, m, n;
	m_offsets[0] = 0;
	for(i = 0; i < MAX_TRI_SZ ; i++) {
		m_offsets[i+1] = m_offsets[i] + i+1;
	}
	for( i= 0; i < 2*m_nVars ; i++) {
		for(j = 0; j <= m_nVars ; j++) {
			m_varCoeffs[i][j] = 0;
		}
	}
	for(i = 0, k = 0; i < (m_triSize - 1) ; i++) {
		for(j = 0; j <= i ; j++) {
			m = VarIndex(i+1, j);
			n = VarIndex(i+1, j+1);
			m_varCoeffs[k][k] = 1;
			m_varCoeffs[k][m] = 1;
			m_varCoeffs[k][n] = 1;
			k++;
		}
	}
	for(i = 0; i < MAX_VARS; i++) {
		m_initVals[i] = 0xff;
	}
	m_nEqns = k;
}

// establece m_triSize, m_nVars y configura los coeficientes base
void SetTriSide(int side)
{
	m_triSize = side;
	if(m_triSize > MAX_TRI_SZ) m_triSize = MAX_TRI_SZ;
	m_nVars = ((m_triSize + 1)*m_triSize)/2;
	MakeBaseCoeffs();
}

// establece el valor inicial de la celda en fila y columna (basado en 0) en val
int AddInitVal(int row, int col, int val) {
	int k;
	if((row >= m_triSize) || (col > row) || (val < 0) ||
		(val > 2) || (val < 0)) {
		return -1;
	}
	k = VarIndex(row,  col);
	m_initVals[k] = val;
	return 0;
}

// resolver el sistema de ecuaciones y valores iniciales
// completa la reducción de filas excepto
// (1) si la celda de la fila pivote es un valor inicial, intercambie eso
// Fila hasta el final e inserta una fila con celda = init val
// (2) si no hay pivote en fila, fila, inserte una ecuación ficticia
// para la variable libre, marque la variable como libre e incremente nFree
int Solve()
{
	int pivcol, j, k, m;
	BYTE bt;
	m_nFree = 0;
	m_nSolns = 1;
	for(pivcol = 0; pivcol < m_nVars; pivcol++) {
		if((k = m_initVals[pivcol]) != 0xff) { // tiene un valor de inicio, utilícelo como ecuación
			// copia el eqn i-ésimo actual al final
			for(j = pivcol; j <= m_nVars; j++) {
				m_varCoeffs[m_nEqns][j] = m_varCoeffs[pivcol][j];
				m_varCoeffs[pivcol][j] = 0;
			}
			m_nEqns++;
			// establecer ith eqn a init val
			m_varCoeffs[pivcol][pivcol] = 1;
			m_varCoeffs[pivcol][m_nVars] = k;
			// eliminar pivcol de las ecuaciones restantes
			for(j = 0; j < m_nEqns ; j++) {
				if(j == pivcol) {
					continue;
				}
				if(m_varCoeffs[j][pivcol] != 0) {
					m_varCoeffs[j][m_nVars] = ((m_varCoeffs[j][m_nVars] + 12) -
						k*m_varCoeffs[j][pivcol]) % 3;
					m_varCoeffs[j][pivcol] = 0;
				}
			}
		} else {
			// encontrar una ecuación no utilizada con un coeficiente distinto de cero
			k = -1;
			for(j = pivcol; j < m_nEqns ; j++) {
				if(m_varCoeffs[j][pivcol] != 0) {
					k = j;
					break;
				}
			}
			if(k == -1) {
				m_initVals[pivcol] = 0xa0;
				m_nFree++;
				m_nSolns *= 3;
				// mueve la fila actual al final y
				// inserta una fila vacía para mantener los índices más fácilmente
				for(j = pivcol; j <= m_nVars; j++) {
					m_varCoeffs[m_nEqns][j] = m_varCoeffs[pivcol][j];
					m_varCoeffs[pivcol][j] = 0;
				}
				m_nEqns++;
			} else {
				if(k != pivcol) {
					// intercambiar las filas i y k;
					for(j = pivcol ; j <= m_nVars; j++) {
						bt = m_varCoeffs[pivcol][j];
						m_varCoeffs[pivcol][j] = m_varCoeffs[k][j];
						m_varCoeffs[k][j] = bt;
					}
				}
				// dividir fila i por coeff[i][i]
				if(m_varCoeffs[pivcol][pivcol] != 1) {
					// debe ser 2, intercambiar 1's y 2's
					for(j = pivcol ; j <= m_nVars; j++) {
						if(m_varCoeffs[pivcol][j] == 2) {
							m_varCoeffs[pivcol][j] = 1;
						} else if(m_varCoeffs[pivcol][j] == 1) {
							m_varCoeffs[pivcol][j] = 2;
						}
					}
				}
				// subtract multiple of row i from other rows
				for(j = 0; j < m_nEqns ; j++) {
					if(j == pivcol) {
						continue;
					}
					if((m = m_varCoeffs[j][pivcol]) != 0) {
						for(k = pivcol; k <= m_nVars ; k++) {
							if((m_varCoeffs[pivcol][k]) != 0) {
								m_varCoeffs[j][k] = ((m_varCoeffs[j][k] + 12) -
									m*m_varCoeffs[pivcol][k]) % 3;
							}
						}
					}
				}
			}
		}
	}
	// verificar 0 = !0 ecuaciones al final
	for(j = m_nVars; j < m_nEqns ; j++) {
		if(m_varCoeffs[j][m_nVars] != 0) {
			m_nSolns = 0;
		}
	}
	return 0;
}

char inbuf[256];

int main()
{
	int n, m, r, c, i, clr, soln, prob, p, sz;
#ifdef TEST
	p = 0;
	while(1) {
		p++;
	if(fgets(&(inbuf[0]), 255, stdin) == NULL) {
		fprintf(stderr, "read failed on prob header\n");
		return -1;
	}
	if(sscanf(&(inbuf[0]), "%d %d %d", &prob, &sz, &soln) != 3){
		fprintf(stderr, "scan failed on problem header\n");
		return -2;
	}
	if(p != prob) {
		fprintf(stderr, "prob label %d != expected %d\n", prob, p);
		return -2;
	}

#endif
	if(fgets(&(inbuf[0]), 255, stdin) == NULL) {
		fprintf(stderr, "read failed on size data\n");
		return -3;
	}
	if(sscanf(&(inbuf[0]), "%d %d", &n, &m) != 2){
		fprintf(stderr, "scan failed on problem data\n");
		return -4;
	}
	if((n < 1) || (n > MAX_TRI_SZ)) {
		fprintf(stderr, "trisize %d not in range 1 ... %d\n", n, MAX_TRI_SZ);
		return -5;
	}
	SetTriSide(n);
	if((m < 0) || (m > m_nVars)) {
		fprintf(stderr, "init var cnt %d not in range 0 ... %d\n", m, m_nVars);
		return -6;
	}
	for(i = 0; i < m ; i++) {
		if(fgets(&(inbuf[0]), 255, stdin) == NULL) {
			fprintf(stderr, "read failed on init data %d\n", i+1);
			return -7;
		}
		if(sscanf(&(inbuf[0]), "%d %d %d", &r, &c, &clr) != 3){
			fprintf(stderr, "scan failed on init data %d\n", i+1);
			return -8;
		}
		if((r < 1) || (r > m_triSize) || (c > r) ||
			(c < 0) || (c < 1) || (clr > 2) || (clr < 0)) {
			fprintf(stderr, "init data %d row %d col %d or color code %d out of range\n",
				i+1, r, c, clr);
			return -9;
		}
		AddInitVal(r - 1, c - 1, clr);
	}
	Solve();
#ifdef TEST
	printf("%d %d\n", m_nSolns, soln);
	}
#else
	printf("%d\n", m_nSolns);
#endif
	return 0;
}