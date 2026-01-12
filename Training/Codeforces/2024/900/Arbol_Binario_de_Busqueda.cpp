#include <bits/stdc++.h>
using namespace std;

// Definición de la estructura del nodo del árbol
template <typename T>
struct Nodo {
   T dato;
   Nodo *izquierda;
   Nodo *derecha;

   Nodo(T valor) : dato(valor), izquierda(nullptr), derecha(nullptr) {}
};

// Clase principal del Árbol Binario de Búsqueda
template <typename T>
class ArbolBinarioBusqueda {
public:
   ArbolBinarioBusqueda() : raiz(nullptr) {}

   // Función para realizar la inserción recursiva
   Nodo<T> *insertarRec(Nodo<T> *nodo, T valor) {
      if (nodo == nullptr) {
         return new Nodo<T>(valor);
      }
      if (valor < nodo->dato) {
         nodo->izquierda = insertarRec(nodo->izquierda, valor);
      } else if (valor > nodo->dato) {
         nodo->derecha = insertarRec(nodo->derecha, valor);
      }
      return nodo;
   }

   // Funciones de recorridos
   void inordenRec(Nodo<T> *nodo) {
      if (nodo != nullptr) {
         inordenRec(nodo->izquierda);
         cout << nodo->dato << " ";
         inordenRec(nodo->derecha);
      }
   }

   void preordenRec(Nodo<T> *nodo) {
      if (nodo != nullptr) {
         cout << nodo->dato << " ";
         preordenRec(nodo->izquierda);
         preordenRec(nodo->derecha);
      }
   }

   void postordenRec(Nodo<T> *nodo) {
      if (nodo != nullptr) {
         postordenRec(nodo->izquierda);
         postordenRec(nodo->derecha);
         cout << nodo->dato << " ";
      }
   }

   void imprimirArbolRec(Nodo<T> *nodo, int nivel) {
      if (nodo != nullptr) {
         imprimirArbolRec(nodo->derecha, nivel + 1);
         for (int i = 0; i < nivel; i++) {
            cout << "   ";
         }
         cout << nodo->dato << endl;
         // cout << "|-- " << nodo->dato << endl;
         imprimirArbolRec(nodo->izquierda, nivel + 1);
      }
   }

   void inorden() {
      inordenRec(raiz);
   }
   void preorden() {
      preordenRec(raiz);
   }
   void postorden() {
      postordenRec(raiz);
   }
   void insertar(T valor) {
      raiz = insertarRec(raiz, valor);
   }
   void imprimirArbol() {
      imprimirArbolRec(raiz, 0);
   }

private:
   Nodo<T> *raiz;
};

int main() {
   ArbolBinarioBusqueda<int> arbol;
   int x = 0;
   while (cin >> x && x != 0) {
      arbol.insertar(x);
   }
   cout << "Inorden: ";
   arbol.inorden();
   cout << endl;

   cout << "Preorden: ";
   arbol.preorden();
   cout << endl;

   cout << "Postorden: ";
   arbol.postorden();
   cout << endl;

   cout << "Árbol horizantal:\n";
   arbol.imprimirArbol();
   return 0;
}