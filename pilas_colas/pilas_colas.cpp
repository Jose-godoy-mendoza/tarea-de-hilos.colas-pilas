#include <iostream>
#include <windows.h>
#include <time.h>
#include <string.h> 
#include <thread>
#include <stdlib.h> 
#include <conio.h>
#include <Windows.h>
using namespace std;



void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}


struct Nodo {
	int valor;
	Nodo* siguiente;
};

struct Nodo2 {
	int valor2;
	Nodo2* siguiente;
};

struct Nodo3 {
	int valor3;
	Nodo3* siguiente;
};
struct Nodo4 {
	int valor4;
	Nodo4* siguiente;
};


void Add(Nodo*&, int);
void Remove(Nodo*&);
void Add2(Nodo2*&, int);
void Remove2(Nodo2*&);
void Add3(Nodo3*&, int);
void Remove3(Nodo3*&);
void Add4(Nodo4*&, int);
void Remove4(Nodo4*&);
void Push(Nodo*&, int);
void Pop(Nodo*&);
void mostrar();
void mostrar2();

Nodo* fin = NULL;
Nodo2* fin2 = NULL;
Nodo3* fin3 = NULL;
Nodo4* fin4 = NULL;



void primera_cola() {
	Nodo* inicio = NULL;
	Nodo* pila = NULL, * pilaaux;
	int valor, i, total = 0, go=25;
	srand(time(NULL));

	Sleep(700);
	for (i = 1; i <= 40; i++) {
		valor = 1 + (rand() % 90);
		cout << valor << " ";
		Add(inicio, valor);
		total = total + valor;
		Push(pila, valor);
	}

	Sleep(900);
	gotoxy(0, 6); cout << "---- COLA 1 ----";
	gotoxy(0, 7); cout << "Inicio: " << inicio->valor;
	gotoxy(0, 8); cout << "Fin: " << fin->valor;
	gotoxy(0, 9); cout << "________________";

	do {
		Remove(inicio);
		if (inicio == NULL) {
			Sleep(700);
			gotoxy(0, 17); cout << "La Cola esta vacia";
		}
		else {
			Sleep(900);
			gotoxy(0, 11); cout << ("* Proceso 1 *");
			gotoxy(0, 12); cout << "________________";
			gotoxy(0, 14); cout << "* Inicio: " << inicio->valor;
			gotoxy(0, 15); cout << "* Fin:    " << fin->valor;
			gotoxy(0, 19); cout << ("*** Total Cola: ") << "[ " << total << " ]";
		}

	} while ((inicio != NULL));
	Sleep(400);
	do {
		
		if (pila == NULL) {
			cout << "La pila esta vacia";

		}
		else {
			Sleep(1100);
			gotoxy(0, go++); cout << "pila 1: " << pila->valor;
		}
		Pop(pila);
	} while ((pila != NULL));
	gotoxy(0, 70);
	cout << " . ";
}


void segunda_cola() {
	Nodo2* inicio2 = NULL;
	Nodo* pila = NULL, * pilaaux;
	int valor2, i, total = 0,go=25;
	srand(time(NULL));
	Sleep(800);

	cout << "         ";
	for (i = 1; i <= 40; i++) {
		valor2 = 4 + rand() % (90 - 1);
		cout << valor2 << " ";
		Add2(inicio2, valor2);
		total = total + valor2;
		Push(pila, valor2);
	}

	Sleep(900);
	gotoxy(40, 6); cout << "---- COLA 2 ----";
	gotoxy(40, 7); cout << "Inicio: " << inicio2->valor2;
	gotoxy(40, 8); cout << "Fin:    " << fin2->valor2;
	gotoxy(40, 9); cout << "________________";

	do {
		Remove2(inicio2);
		if (inicio2 == NULL) {

			gotoxy(40, 17); cout << "La Cola esta vacia";
		}
		else {
			Sleep(900);
			gotoxy(40, 11); cout << ("* Proceso 2 *");
			gotoxy(40, 12); cout << "________________";
			gotoxy(40, 14); cout << "* Inicio: " << inicio2->valor2;
			gotoxy(40, 15); cout << "* Fin:    " << fin2->valor2;
			gotoxy(40, 19); cout << ("*** Total Cola: ") << "[ " << total << " ]";
		}
	} while ((inicio2 != NULL));
	
	Sleep(400);
	do {
		if (pila == NULL) {
			cout << "La pila esta vacia";

		}
		else {
			Sleep(1100);
			gotoxy(40, go++); cout << "pila 2: " << pila->valor;
		}
		Pop(pila);
	} while ((pila != NULL));

	
	gotoxy(0, 70);
	cout << " . ";
}



void tercera_cola() {
	Nodo3* inicio3 = NULL;
	Nodo* pila = NULL, * pilaaux;
	int valor3, i, Total = 0, go=25;
	srand(time(NULL));
	Sleep(899);
	int mas = rand() % 3;

	cout << "         ";
	for (i = 1; i <= 40; i++) {
		valor3 = mas + (rand() % 87);
		cout << valor3 << " ";
		Add3(inicio3, valor3);
		Total = Total + valor3;
		Push(pila, valor3);
	}

	Sleep(900);
	gotoxy(80, 6); cout << "---- COLA 3 ----";
	gotoxy(80, 7); cout << "Inicio: " << inicio3->valor3;
	gotoxy(80, 8); cout << "Fin:    " << fin3->valor3;
	gotoxy(80, 9); cout << "________________";

	do {
		Remove3(inicio3);
		if (inicio3 == NULL) {

			gotoxy(80, 17); cout << "La Cola esta vacia";
		}
		else {
			Sleep(900);
			gotoxy(80, 11); cout << ("* Proceso 3 *");
			gotoxy(80, 12); cout << "________________";
			gotoxy(80, 14); cout << "* Inicio: " << inicio3->valor3;
			gotoxy(80, 15); cout << "* Fin: " << fin3->valor3;
			gotoxy(80, 19); cout << ("*** Total Cola: ") << Total;
		}
	} while ((inicio3 != NULL));
	
	Sleep(400);
	do {
		if (pila == NULL) {
			cout << "La pila esta vacia";

		}
		else {
			Sleep(1100);
			gotoxy(80, go++); cout << "pila 3: " << pila->valor;
		}
		Pop(pila);
	} while ((pila != NULL));

	gotoxy(0, 70);
	cout << " . ";
}

void cuarta_cola() {
	Nodo4* inicio4 = NULL;
	Nodo* pila = NULL, * pilaaux;
	int valor4, i, Total = 0, go=25;
	srand(time(NULL));
	Sleep(996);
	int mas = rand() % 5;

	cout << "          ";
	for (i = 1; i <= 40; i++) {
		valor4 = mas + (rand() % 86);
		cout<< valor4 << " ";
		Add4(inicio4, valor4);
		Total = Total + valor4;
		Push(pila, valor4);
	}

	Sleep(900);
	gotoxy(120, 6); cout << "---- COLA 4 ----";
	gotoxy(120, 7); cout << "Inicio: " << inicio4->valor4;
	gotoxy(120, 8); cout << "Fin: " << fin4->valor4;
	gotoxy(120, 9); cout << "________________";

	do {
		Remove4(inicio4);
		if (inicio4 == NULL) {

			gotoxy(120, 17); cout << "La Cola esta vacia";
		}
		else {
			Sleep(900);
			gotoxy(120, 11); cout << ("* Proceso 4 *");
			gotoxy(120, 12); cout << "________________";
			gotoxy(120, 14); cout << "* Inicio: " << inicio4->valor4;
			gotoxy(120, 15); cout << "* Fin: " << fin4->valor4;
			gotoxy(120, 19); cout << ("*** Total Cola: ") << Total;
		}
	} while ((inicio4 != NULL));
	Sleep(400);
	
	do {
		if (pila == NULL) {
			cout << "La pila esta vacia";

		}
		else {
			Sleep(1100);
			gotoxy(120, go++); cout << "pila 4: " << pila->valor;
		}
		Pop(pila);
	} while ((pila != NULL));

	gotoxy(0, 70);
	cout << " . ";
}


void Add(Nodo*& inicio, int v) {
	Nodo* add = new Nodo();
	add->valor = v;
	add->siguiente = NULL;
	if (inicio == NULL) {
		inicio = add;
	}
	else {
		fin->siguiente = add;
	}
	fin = add;
}

void Add2(Nodo2*& inicio2, int z) {
	Nodo2* add2 = new Nodo2();
	add2->valor2 = z;
	add2->siguiente = NULL;
	if (inicio2 == NULL) {
		inicio2 = add2;
	}
	else {
		fin2->siguiente = add2;
	}
	fin2 = add2;
}


void Add3(Nodo3*& inicio3, int z) {
	Nodo3* add3 = new Nodo3();
	add3->valor3 = z;
	add3->siguiente = NULL;
	if (inicio3 == NULL) {
		inicio3 = add3;
	}
	else {
		fin3->siguiente = add3;
	}
	fin3 = add3;
}


void Add4(Nodo4*& inicio4, int z) {
	Nodo4* add4 = new Nodo4();
	add4->valor4 = z;
	add4->siguiente = NULL;
	if (inicio4 == NULL) {
		inicio4 = add4;
	}
	else {
		fin4->siguiente = add4;
	}
	fin4 = add4;
}

void Remove(Nodo*& inicio) {
	int v;
	Nodo* fin = NULL;
	v = inicio->valor;
	Nodo* cola = inicio;

	if (inicio == fin) {
		inicio = NULL;
		fin = NULL;
	}
	else {
		inicio = inicio->siguiente;
		//Push(pila, v);
	}
	delete cola;
}

void Remove2(Nodo2*& inicio2) {
	int z;
	Nodo2* fin2 = NULL;
	z = inicio2->valor2;
	Nodo2* cola = inicio2;

	if (inicio2 == fin2) {
		inicio2 = NULL;
		fin2 = NULL;
	}
	else {
		inicio2 = inicio2->siguiente;
		//Push(pila, z);
	}
	delete cola;
}

void Remove3(Nodo3*& inicio3) {
	int z;
	Nodo3* fin3 = NULL;
	z = inicio3->valor3;
	Nodo3* cola = inicio3;

	if (inicio3 == fin3) {
		inicio3 = NULL;
		fin3 = NULL;
	}
	else {
		inicio3 = inicio3->siguiente;
		//Push(pila, z);
	}
	delete cola;
}

void Remove4(Nodo4*& inicio4) {
	int z;
	Nodo4* fin4 = NULL;
	z = inicio4->valor4;
	Nodo4* cola = inicio4;

	if (inicio4 == fin4) {
		inicio4 = NULL;
		fin4 = NULL;
	}
	else {
		inicio4 = inicio4->siguiente;
		//Push(pila, z);
	}
	delete cola;
}

void Push(Nodo*& pila, int v) {
	Nodo* push = new Nodo();
	push->valor = v;
	push->siguiente = pila;
	pila = push;
}


void Pop(Nodo*& pila) {
	int v = NULL;
	Nodo* pop = pila;
	v = pop->valor;
	pila = pop->siguiente;
	if (pila == NULL) {
	}
	delete pop;
}





/*
void mostrar()
{

	
	pilaaux = pila;
	cout << "Los datos de la pila son: " << endl;
	while (pilaaux != NULL)
	{
		Sleep(1000);
		cout << pilaaux->valor << endl;
		pilaaux = pilaaux->siguiente;
	}
	cout << "---FIN---" << endl;
}
*/

int main() {
	thread p1(primera_cola);
	thread p2(segunda_cola);
	thread p3(tercera_cola);
	thread p4(cuarta_cola);

	p1.join();
	p2.join();
	p3.join();
	p4.join();

	return 0;
	gotoxy(0, 35);
	cout << (".");
	system("PAUSE");

}
