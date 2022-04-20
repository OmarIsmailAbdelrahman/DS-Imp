#include "Stack.h"

template <class T>
Stack<T>::Stack() {
	contain = 0;
	size = 10;
	arr = new T [size];
}

template <class T>
Stack<T>::Stack(int s) {
	contain = 0;
	size = s;
	arr = new T [size];
}


template <class T>
void Stack<T>::push(T v) {
	if (contain == size) {
		expand();
	}
	arr[contain] = v;
	contain++;
}

template <class T>
void Stack<T>::expand() {
	T* temp = new T[size * 2];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	delete [] arr;
	arr = temp;
	size *= 2;
}

template <class T>
T Stack<T>::pop() {
	T temp = arr[contain - 1];
	contain--;
}
