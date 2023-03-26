/**
 * Universidad Minuto de Dios - @Team Try Again();
 * @solution problem: J. 7 Segments You Say?
 */
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define	MAXSCALE	8
#define	MAXWIDTH	80
#define	MAXBITSTR 1000

const unsigned char valid_charset[16] = {
	0x77,
	0x24,
	0x5d,
	0x6d,
	0x2e,
	0x6b,
	0x7b,
	0x25,

	0x7f,
	0x6f,
	0x3f,
	0x7a,
	0x53,
	0x7c,
	0x5b,
	0x1b
};

char ibuf[MAXBITSTR + 32];
int S;
int nLines = 0;

char cell[MAXSCALE * 7][MAXWIDTH + MAXSCALE*2 + 1];

const char *szDraw  = "XXXXXXXXXXXXXXXXXXXXXXXX";
const char *szSpace = "                        ";

unsigned char MapChar(unsigned char c)
{
	int i;
	for (i = 0; i < sizeof(valid_charset); i++) {
		if (valid_charset[i] == c) {
			return(c);
		}
	}
	return(0);
}

void DoHorz(int x, int seg, int c)
{
	const char *f;
	int r, startr;

	startr = (seg / 3) * (S + S * 2);
	f = (c & (1 << seg)) ? szDraw : szSpace;

	for (r = 0; r < S; r++) {
		snprintf(&(cell[startr + r][x]), MAXWIDTH + 2 - x, "%*.*s%*.*s",
			S * 3, S * 3, f, S * 2, S * 2, szSpace);
	}
}

void DoVert(int x, int seg, int c)
{
	const char *f1, *f2;
	int row, r;

	f1 = (c & (1 << seg)) ? szDraw : szSpace;
	f2 = (c & (1 << (seg + 1))) ? szDraw : szSpace;

	if (seg == 1) {
		row = S;
	} else {
		row = S + S*2 + S;
	}

	for (r = 0; r < S * 2; r++) {
		snprintf(&(cell[row + r][x]), MAXWIDTH + 2 - x, "%*.*s%*.*s%*.*s%*.*s",
			S, S, f1, S, S, szSpace, S, S, f2, S * 2, S * 2, szSpace);
	}
}

void DoFlush(int width)
{
	int r, rows = S * 7;
	if (nLines++ > 0) {
		for (r = 0; r < S; r++) {
			printf("|\n");
		}
	}
	for (r = 0; r < rows; r++) {
		printf("%*.*s|\n", width, width, &(cell[r][0]));
	}
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, width, nout, nchar;
	int x, nstate, c;
	char* s;

	if (fgets(&(ibuf[0]), sizeof(ibuf), stdin) != NULL) {
		S = ibuf[0] - '0';
		for (width = n = 0; ; ) {
			width += S * 3;
			if (width > 80) {
				break;
			}
			n++;
			if (width == 80) {
				break;
			}
			width += S * 2;
		}

		for (s = &(ibuf[2]); *s == '0' || *s == '1'; s++) {
		}
		nchar = s - &(ibuf[2]);
		nstate = nchar % 7;
		if (nstate != 0) {
			nstate = 7 - nstate;
		}
		c = 0;
		for (s = &(ibuf[2]), x = nout = 0; nchar-- > 0; s++) {
			c <<= 1;
			if (*s == '1') {
				c |= 1;
			}
			nstate++;
			if (nstate == 7) {
				c = MapChar(c);
				DoHorz(x, 0, c);
				DoVert(x, 1, c);
				DoHorz(x, 3, c);
				DoVert(x, 4, c);
				DoHorz(x, 6, c);

				nstate = 0;
				c = 0;
				nout++;

				if (nout >= n) {
					DoFlush(n*S*5 - S*2);
					x = nout = 0;
				} else {
					x += S * 5;
				}
			}
		}
		if (nout > 0) {
			DoFlush(nout * S * 5 - S * 2);
		}
		return(0);
	}
}