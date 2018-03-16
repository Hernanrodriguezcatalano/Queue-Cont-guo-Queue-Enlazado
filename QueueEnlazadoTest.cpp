#include "stdafx.h"
#include <iostream>
#include <assert.h>
#include <array>
#include "QueueEnlazado.h"
#include <Windows.h>
using namespace std;

static Queue TQueue;
static int a = 0, c;

int main() {

	cout << "Seleccione la funcion a testear:" << endl << "1.enQueue" << endl << "2.eQueue" << endl << "3.First" << endl;
	cin >> c;
	assert(c > 0 && c < 4);
	switch (c)
	{
	case 1:
		cout << "Ingrese la cantidad de elementos genericos a ingresar a la Queue: ";
		unsigned N;
		cin >> N;
		assert(N > 0);
		cout << "El Queue es: " << endl;
		while (a<N)
		{
			enQueue(TQueue, rand() % 100);
			cout << "[" << TQueue.rear->value << "]" << endl;
			++a;
		}
		cin >> a;
		break;
	case 2:
		vaciarQueue(TQueue);
		cout << "Intentando hacer deQueue a una Queue vacia...";
		Sleep(3000);
		deQueue(TQueue);
	case 3:
		vaciarQueue(TQueue);
		cout << "Intentando obtener el primer elemento de una Queue vacia...";
		Sleep(3000);
		first(TQueue);
	}

}