#include "stdafx.h"
#include <iostream>
#include <assert.h>
#include "QueueEnlazado.h"

using namespace std;

static Queue TQueue;
static int a = 0, c;
using namespace std;

int main() {

	while (a<2) {
		cout << "Ingresa un para para introducir al Stack: ";
		cin >> c;
		enQueue(TQueue, c);
		cout << "1.Para introducir otro valor.[MAX 800]" << endl << "2.¿Es Palindromo?" << endl;
		cin >> a;
		assert(a>0 && a<3);

	}

	cout << "El Queue : ";
	/*for (size_t i = 0; i < Tstack.nivel; i++)
	{
	push(Tstack, rand() % 100);
	cout << "[" << Tstack.first->value << "]" << endl;
	++a;
	Tstack.first->next;
	} */

	if (EsPalindromo(TQueue))
	{

		cout << "Es Palindromo";
		cin >> a;
	}
	else
	{

		cout << "No es Palindromo";
		cin >> a;
	}

	/*cout<< "El Stack invertido es :";
	while (a < Tstack.nivel)
	{
	push(Tstack, rand() % 100);
	cout << "[" << Tstack.first->value << "]" << endl;
	++a;
	}*/
}