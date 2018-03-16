#include "stdafx.h"
#include<iostream>
#include "QueueEnlazado.h"
#include <cassert>
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

	for (size_t i = 0; i < Long; i++)
	{
		if (Qaux.rear->value != Qaux2.front->value)
		{
			return false;
		}
		Qaux.rear->next;
		Qaux2.rear->next;
	}
	return true;
}
