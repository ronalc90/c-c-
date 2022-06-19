#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define MAX 8


void S(int k);
void D(int k);
char sec[MAX];
int k;
int contador = 0;
struct nodo {
	int info;
	struct nodo *izq;
	struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x) {
	Arbol p = new Nodo;
	p->info = x;
	p->izq = NULL;
	p->der = NULL;
	return p;
}

int esNumero(char x) {
	if (x <= '9' && x >= '0')
		return 1;
	return 0;
}

int esLetra(char x) {
	if (x <= 'z' && x >= 'a')
		return 1;
	return 0;
}

void insertar(Arbol a, int num) {
	if (a == NULL)
		return;
	else if (num == a->info)
		return;
	else if (num < a->info)
		insertar(a->izq, num);
	else if (num > a->info)
		insertar(a->der, num);
}

int checar(int num) {
	int i = 0;
	while (i < contador) {
		if (num == sec[i])
			return 1;
		i++;
	}
	return 0;
}

void guardar(int num) {
	sec[contador] = num;
	contador++;
}

void mostrar(int num) {
	int i = 0;
	cout << num << ": ";
	while (i < contador) {
		cout << sec[i];
		i++;
	}
	cout << endl;
}
//S ::= D | D E | E

void S(int k) {
	if (esNumero(sec[k])) {
		D(k);
		E(k + 1);
	}
	else if (esLetra(sec[k]))
		E(k);
}

//D ::= 0 | 1 | 2 | … | 9
void D(int k) {
	if (esNumero(sec[k])) {
		guardar(sec[k]);
		S(k + 1);
	}
}

//E ::= L | L S
void E(int k) {
	if (esLetra(sec[k])) {
		guardar(sec[k]);
		S(k + 1);
	}
}


int main(int argc, char** argv) {
	Arbol arbol = crearArbol('S');
	insertar(arbol, '0');
	insertar(arbol, '1');
	insertar(arbol, '2');
	insertar(arbol, '3');
	insertar(arbol, '4');
	insertar(arbol, '5');
	insertar(arbol, '6');
	insertar(arbol, '7');
	insertar(arbol, '8');
	insertar(arbol, '9');
	insertar(arbol, 'a');
	insertar(arbol, 'b');
	insertar(arbol, 'c');
	insertar(arbol, 'd');
	insertar(arbol, 'e');
	insertar(arbol, 'f');
	insertar(arbol, 'g');
	insertar(arbol, 'h');
	insertar(arbol, 'i');
	insertar(arbol, 'j');
	insertar(arbol, 'k');
	insertar(arbol, 'l');
	insertar(arbol, 'm');
	insertar(arbol, 'n');
	insertar(arbol, 'o');
	insertar(arbol, 'p');
	insertar(arbol, 'q');
	insertar(arbol, 'r');
	insertar(arbol, 's');
	insertar(arbol, 't');
	insertar(arbol, 'u');
	insertar(arbol, 'v');
	insertar(arbol, 'w');
	insertar(arbol, 'x');
	insertar(arbol, 'y');
	insertar(arbol, 'z');

	printf("Ingrese una secuencia de caracteres: ");
	gets_s(sec);

	S(0);
	return 0;
}
