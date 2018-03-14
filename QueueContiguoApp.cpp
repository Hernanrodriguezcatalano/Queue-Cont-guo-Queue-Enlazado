#include "stdafx.h"
#include <iostream>
#include <assert.h>
#include "QueueContiguo.h"

using namespace std;
static unsigned a;
static int c;
static queue Tqueue;
int main() {
	while (a<2) {
		cout << "Ingresa un para para introducir a la Queue: ";
		cin >> c;
		enQueue(Tqueue, c);
		cout << "1.Para introducir otro valor.[MAX 800]" << endl << "2.¿Es Palindromo?." << endl;
		cin >> a;
		assert(a>0 && a<3);
	}

	cout << "La Queue: " << endl;
	for (size_t i = 0; i < Tqueue.size_t; i++)
	{
		cout << "[" << Tqueue.b[i] << "]";
	}

	if (EsPalindromo(Tqueue))
	{
		cout << "Es Palindromo";
		cin >> a;
	}
	else
	{
		cout << "No es Palindromo";
		cin >> a;
	}
}
