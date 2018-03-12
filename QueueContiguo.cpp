#include "stdafx.h"
#include "QueueContiguo.h"
#include<iostream>
#include<cassert>

using namespace std;

void enQueue(queue& t, int y) {
	assert(t.size_t < M);
		t.b.at(t.rear) = y;
		++t.size_t;
		++t.rear ;
}
int deQueue(queue& t) {
	assert(t.size_t > 0);
		--t.size_t;
		++t.front ;
		return t.b.at(t.front - 1);
	
}

int first(const queue& t) {
	assert(t.size_t != 0);
	return t.b.at(t.front);
}
unsigned length(const queue& t) {
	return t.size_t;
}
void vaciarQueue(queue& t) {
	for (size_t i = 0; i < t.size_t; i++)
	{
		t.b[i] = 0;
	}
	t.rear = 0;
	t.front = 0;
	t.size_t = 0;
}

bool EsPalindromo(queue t) {
	assert(t.size_t > 0);
	queue qaux;
	for (size_t i = 0; i < t.size_t; i++)
	{
		qaux.b[i] = deQueue(t);
	}
	for (size_t i = 0; i < t.size_t; i++)
	{
		if (t.size_t != qaux.size_t)
		{
			return false;
		}
	}
	return true;
}