#ifndef assignments_implement
#define assignments_implement
#include "assignments decleration.h"
template<class T>
queue_by_stack<T>::queue_by_stack() {
	que = new T[MAX];
	top = -1;
}
template<class T>
bool queue_by_stack<T> ::isEmpty() {

	if (top == -1)
		return 1;
	return 0;

}
template<class T>
bool queue_by_stack<T>::isfull() {

	if (top == MAX - 1)
		return 1;
	return 0;

}
template<class T>
void queue_by_stack<T>::push(T temp) {
	if (isfull())
		return;
	top++;
	que[top] = temp;

}
template<class T>
int queue_by_stack::pop()
{

	if (isEmpty())
		exit(0);

	return que[top--];
}


template<class T>
void queue_by_stack<T> ::display() {
	if (isEmpty())
	{
		cout << " your queue is empty \n";
		exit(0);
	}
	else {
		for (int i = top; i >= 0; i--) {

			cout << " " << que[i] << endl;

		}
	}
}
template<class T>
int queue_by_stack<T> ::deque() {
	queue_by_stack s1, s2;
	T val = que[0];

	while (top != 0)
		s1.push(pop());


	while (s1.top != -1)
		s2.push(s1.pop());

	top = s2.top;
	que = s2.que;

	return val;
}
#endif // !assignments_implement

