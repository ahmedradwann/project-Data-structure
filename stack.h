
#ifndef stack_h
#define stack_h
#include "classes decleration.h"
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
}
#endif /* stack_h */
