
#ifndef stack_h
#define stack_h
#include "classes decleration.h"
using namespace std;
template <class T>
int stack_array<T> ::number_of_element() {
	return counter;
}
template <class T>
bool stack_array<T>::isEmpty() {

	if (top == -1)
		return 1;
	return 0;
}
template <class T>
bool stack_array<T> ::isFull() {
	if (top == MAX - 1)
		return 1;
	return 0;
}
template <class T>
stack_array<T>::stack_array() {
	top = -1;
	counter = 0;
}
template <class T>
void stack_array<T> ::push(T val) {

	if (!isFull()) {
		arr[++top] = val;
		counter++;
	}
	else
		return;

}
template <class T>
T stack_array<T>::pop() {

	if (!isEmpty()) {
		counter--;
		return arr[top--];
	}
	exit(0);
}
#endif /* stack_h */
