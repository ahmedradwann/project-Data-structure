//
//  Queue.h
//  project_Data
//
//

#ifndef Queue_h
#define Queue_h
#include "Classes & Assignments Decleration.h"
#include "linked list.h"
//Queue array
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
    if (IsFull())
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

    if (IsEmpty())
        exit(0);
    value = arr[front];
    front++;
    counter--;
    return value;

}
template <class T>
void queue_array<T>::display() {
    int temp = front;
    if (IsEmpty()) {
        cout << "your queue is empty \n";
        return;
    }
    while (temp <= rear)
    {
        cout <<arr[temp]<<" ";
        temp++;
    }
}
//Queue circular array

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
    if (IsFull())
        return;
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX;

        arr[rear] = val;

    }
    counter++;

}
template <class T>
T queue_circular_array<T>::dequeue() {

    T value;

    if (IsEmpty())
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

        if (IsEmpty()) {
            cout << "your queue is empty \n";
            return;
        }

        while (temp != rear)
        {
            cout <<arr[temp] <<" ";
            temp++;
        }
        if (temp == rear)
            cout <<arr[temp] <<" ";
        cout<<endl;
}

//queue with linked list <inheritance>
//inser last
//delelt first

template <class T>
queue_linked_list<T>::queue_linked_list() {
    this->head=NULL;
    this->tail=NULL;
    this->count = 0;
}
template <class T>
bool queue_linked_list<T>::IsEmpty() {
    return this->count==0;
}

template <class T>
void queue_linked_list<T>::enqueue(T val) {
    this->insert_last(val);
}
template <class T>
void queue_linked_list<T>::dequeue() {
    this->deletion_first();
}
template <class T>
queue_linked_list<T>::~queue_linked_list() {
    this->~linked_list<T>();
}
template <class T>
void queue_linked_list<T>::display() {
    this->linked_list<T>::display();
}

//circular queue with circular linked list <inheritance>

template <class T>
queue_circular_linked_list<T>::queue_circular_linked_list() {
}
template <class T>
bool queue_circular_linked_list<T>::IsEmpty() {
    return this->count==0;
}


template <class T>
void queue_circular_linked_list<T>::enqueue(T val) {
    this->insert_last(val);
    
}
template <class T>
void queue_circular_linked_list<T>::dequeue() {
    this->deletion_first();

}
template <class T>
void queue_circular_linked_list<T>::display() {
    this->linked_list_circular<T>::display();
}
template <class T>
queue_circular_linked_list<T>::~queue_circular_linked_list() {
    this->~linked_list_circular<T>();
}


#endif /* Queue_h */
