#include "stdafx.h"
#include<iostream>
#include "QueueEnlazado.h"
#include <cassert>
#include <array>

using namespace std;
void enQueue(Queue& t, int y) {
	if (t.nivel == 0) {
		t.rear->value = y;
		++t.nivel;
	}
	else {
		Node *q = new Node;
		q->value = y;
		t.rear->next = q;
		t.rear = q;
		++t.nivel;
	}
}
int deQueue(Queue& t) {
	assert(t.nivel != 0);
		int valor = t.front->value;
		t.front = t.front->next;
		--t.nivel;
		return valor;
	
}
int first(const Queue& t) {
	assert(t.nivel != 0);
		return t.front->value;
	
}
unsigned length(const Queue& t) {
	return t.nivel;
}
void vaciarQueue(Queue& t) {
	t.front = new Node;
	t.rear = t.front;
	t.nivel = 0;
}

bool EsPalindromo(Queue t) {
	assert(t.nivel != 0);

	unsigned Long = t.nivel;
	Queue Qaux;
	Queue Qaux2;
	Qaux = t;

	for (size_t i = 0; i < Long; i++)
	{
		enQueue(Qaux2, deQueue(t));
	}

	for (size_t i = 1; i <= Long; i++)
	{
		if (i>Long)
		{
			return true;
		}
		cout << "Q.rear->value:" << Qaux.rear->value <<" posicion :"<<i << endl;
		cout << "Q.rear->front:" << Qaux.front->value <<" posicion :"<<i << endl;
		cout << "Q2.rear->value:" << Qaux2.rear->value <<" posicion :"<<i << endl;
		cout << "Q2.front->value:" << Qaux2.front->value <<" posicion :"<<i << endl;
		Qaux.front->next;
		Qaux2.front->next;
	}

/*	for (size_t i = 0; i < Long; i++)
	{
		if (Qaux.rear->value != Qaux2.front->value)
		{
			cout << "error en: " << i<<endl;
			return false;
		}
		cout << "Qaux.rear Antes del next: "<<Qaux2.rear->value<<endl <<"vuelta: "<<i <<endl;
		Qaux.rear->next;
		--Qaux2.nivel;
		cout << "Qaux.rear Despues del next: " << Qaux2.rear->value << endl << "vuelta: " << i << endl; 
	}
	return true;
	*/

}
