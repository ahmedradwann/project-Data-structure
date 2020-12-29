#ifndef Queue_h
#define Queue_h
#include "classes decleration.h"
// implementation of single queue using array 

template <class T>
queue_array<T>::queue_array() {
	counter = 0;
	front = -1; rear = -1;
}
template <class T>
bool queue_array<T>::IsEmpty() {
	if (front == -1 && rear == -1)
		return 1;
	return 0;
}
template <class T>
bool queue_array<T>::IsFull() {
	if (rear == MAX - 1)
		return 1;
	return 0;
}
template <class T>
void queue_array<T>::enqueue(T val) {
	if (isFull())
		return;
	if (front == -1)
		front = 0;
	rear++;
	arr[rear] = val;
	counter++;

}
template <class T>
T queue_array<T>::dequeue() {

	T value;

	if (isEmpty())
		exit(0);
	value = arr[front];
	front++;
	counter--;
	return value;

}
template <class T>
void queue_array<T>::display() {
	int temp = front;
	if (isEmpty()) {
		cout << "your queue is empty \n";
		exit(0);
	}

	while (temp <= rear)
	{
		cout << " " << arr[temp] << endl;
		temp++;
	}
	cout << "number of elements : " << counter << endl;
}

//implementation of circular queue using array

template <class T>
queue_circular_array<T>::queue_circular_array() {
	counter = 0;
	front = -1; rear = -1;
}
template <class T>
bool queue_circular_array<T>::IsEmpty() {
	if (front == -1 && rear == -1)
		return 1;
	return 0;
}
template <class T>
bool queue_circular_array<T>::IsFull() {
	if ((rear + 1) % MAX == front)
		return 1;
	return 0;
}
template <class T>
void queue_circular_array<T>::enqueue(T val) {
	if (isFull())
		return;
	else {
		if (front == -1)
			front = 0;
		rear = (rear + 1) % MAX;

		arr[(rear + 1) % MAX] = val;

	}
	counter++;

}
template <class T>
T queue_circular_array<T>::dequeue() {

	T value;

	if (isEmpty())
		exit(0);

	else if (front == rear) {
		value = arr[front];
		front = rear = -1;
	}
	else {
		value = arr[front];
		front = (front + 1) % MAX;
	}
	counter--;
	return value;

}
template <class T>
void queue_circular_array<T>::display() {
	int temp = front;
	if (isEmpty()) {
		cout << "your queue is empty \n";
		return;
	}
	while (temp <= rear)
	{
		cout << " " << arr[temp] << endl;
		temp++;
	}
	cout << "number of elements : " << counter << endl;
}
// implementation queue using linked list
template <class T>
queue_linked_list<T>::queue_linked_list() {
	head = tail = NULL;
	counter = 0;
}
template <class T>
bool queue_linked_list<T>::IsEmpty() {
	if (head == NULL && tail == NULL)
		return 1;
	return 0;
}


template <class T>
void queue_linked_list<T>::enqueue(T val) {
	node<T>* temp = new node<T>;
	temp->next = NULL;
	temp->val = val;
	if (IsEmpty()) {
		head = tail = temp;
		return;
	}

	tail->next = temp;
	tail = temp;
	counter++;
}
template <class T>
T queue_linked_list<T>::dequeue() {
	node<T>* temp = new node<T>;
	temp = head;

	if (IsEmpty())
		exit(0);
	head = head->next;
	return temp->val;
	delete(temp);

}
template <class T>
queue_linked_list<T>::~queue_linked_list() {
	node<T>* current = NULL;
	while (head != NULL) {
		current = head;
		head = head->next;
		current->next = NULL;
		delete current;
	}
	tail = head;
}
template <class T>
void queue_linked_list<T>::display() {
	node<T>* curr = new node<T>;
	curr = head;
	if (IsEmpty())
		cout << " The linked list is empty \n";
	while (curr != NULL) {
		cout << curr->val << endl;
		curr = curr->next;
	}
	cout << "Number of Nodes = " << counter << endl;
}

//implementation circular queue using linked list

template <class T>
queue_circular_linked_list<T>::queue_circular_linked_list() {
	head = tail = NULL;
	counter = 0;
}
template <class T>
bool queue_circular_linked_list<T>::IsEmpty() {
	if (head == NULL && tail == NULL)
		return 1;
	return 0;
}


template <class T>
void queue_circular_linked_list<T>::enqueue(T val) {
	node<T>* temp = new node<T>;
	temp->next = NULL;
	temp->val = val;
	if (IsEmpty()) {
		head = tail = temp;
		return;
	}

	tail->next = temp;
	tail = temp;
	tail->next = head;
	counter++;
}
template <class T>
T queue_circular_linked_list<T>::dequeue() {
	node<T>* temp = new node<T>;
	temp = head;

	if (IsEmpty())
		exit(0);

	head = head->next;
	tail->next = head;

	return temp->val;


}
template <class T>
queue_circular_linked_list<T>::~queue_circular_linked_list() {
	node<T>* current = NULL;
	while (head != NULL) {
		current = head;
		head = head->next;
		current->next = NULL;
		delete current;
	}
	tail = head;
}
template <class T>
void queue_circular_linked_list<T>::display() {
	node<T>* curr = new node<T>;
	curr = head;
	if (IsEmpty())
		cout << " The linked list is empty \n";
	while (curr->next != head) {
		cout << curr->val << endl;
		curr = curr->next;
	}
	if (curr->next == head)
		cout << curr->val << endl;
	cout << "Number of Nodes = " << counter << endl;
}
#endif /* Queue_h */
