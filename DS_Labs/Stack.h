#pragma once
//this is university implementation of Stack

template <class T>
class Stack {
	int* arr;
	int size;
	int contain = 0;
	int head;

	Stack();
	Stack(int s);
	~Stack();
	void push(T v);
	T pop();
	void expand();
	bool isEmpty();

};


