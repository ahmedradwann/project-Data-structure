#ifndef assignments_implement
#define assignments_implement
#include "assignments decleration.h"

// Assignment 4
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

// Assignment 1
template<class T>
linked_list_ASS<T>::linked_list_ASS() {

	head = tail = NULL;
	count = 0;

}
template<class T>
int linked_list_ASS<T>::number_of_element() {

	return count;
}
template<class T>
void linked_list_ASS<T>::creat_or_insert(int value, int choice) {

	node<T>* neww;
	neww = new node<T>;
	neww->val = value;
	neww->next = NULL;
	count++;
	if (choice == 1) {
		if (head == NULL) {
			head = neww;
			tail = neww;

		}
		else {
			neww->next = head;
			head = neww;

		}

	}
	else if (choice == 2) {

		if (head == NULL) {
			head = tail = neww;
		}
		else {
			tail->next = neww;
			tail = neww;

		}


	}
	else if (choice == 3) {
		int pos;

		cout << " enter the position : ";
		cin >> pos;
		node<T>* current = head;

		for (int i = 1; pos - 1 > i; i++) {
			current = current->next;
		}
		neww->next = current->next;
		current->next = neww;
	}


}

template<class T>
void linked_list_ASS<T>::display_the_elements() {
	node<T>* current = head;

	while (current != NULL)
	{
		cout << current->val << " " << endl;
		current = current->next;

	}
}
#endif // !assignments_implement

