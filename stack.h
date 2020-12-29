
#ifndef stack_h
#define stack_h
#include "classes decleration.h"
<<<<<<< HEAD
#include <assert.h>
template <class T>
stack_Dynamic<T>::stack_Dynamic(int size){
    arr=new int[size];
    this->size=size;
    top=-1;
    counter=0;
}
template <class T>
void stack_Dynamic<T>::push(T element){
    if(IsFull()){
        cout<<"over flow\n";
        return;
    }
    arr[++top]=element;
    counter++;
}
template <class T>
T stack_Dynamic<T>::pop(){
    if(IsEmpty()){
        cout<<"under flow\n";
        assert(!IsEmpty());
    }
    counter--;
    return arr[top--];
}
template <class T>
bool stack_Dynamic<T>::IsEmpty(){
    return top==-1;
}
template <class T>
T stack_Dynamic<T>::peak(){
    return arr[top];
}
template <class T>
bool stack_Dynamic<T>::IsFull(){
    return top==size-1;
}
template <class T>
void stack_Dynamic<T>::display(){
    for(int i=top;i>=0;i--)
        cout<<arr[i]<<" ";
    cout<<endl;
}
template <class T>
stack_Dynamic<T>::~stack_Dynamic(){
    delete arr;
=======
template <class T>
bool stack_array<T>::IsEmpty() {

	if (top == -1)
		return 1;
	return 0;
}
template <class T>
bool stack_array<T> ::IsFull() {
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
>>>>>>> 0b51f7191445dd1287ba565cccad7352a2d1c343
}
#endif /* stack_h */
