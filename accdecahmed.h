#ifndef accdecahmed_h
#define accdecahmed_h
#include "ahmed assignment decle.h"
//assignment 4
template <class T>
queue_using_stack<T>::queue_using_stack(int size):stack_Dynamic<T>(size){
}
template <class T>
void queue_using_stack<T>::enqueue(T val){
    this->push(val);
}
template <class T>
bool queue_using_stack<T>::isEmpty(){
    this->isEmpty();
}
template <class T>
bool queue_using_stack<T>::isfull(){
    this->isfull();
}
template <class T>
void queue_using_stack<T>::display(){
    this->stack_Dynamic<T>::display();
}
template <class T>
T queue_using_stack<T>::deque(){
    queue_using_stack obj(this->number_of_element());
    T val=this->arr[0];
    while (this->top != 0)
        obj.push(this->pop());
    this->top=-1;
    while (obj.top != -1)
        this->push(obj.pop());
    return val;
}
//assignment 1
template <class T>
int linked_list_ASS<T>::number_of_element(){
    return this->linked_list<T>::number_of_element();
}
template <class T>
int linked_list_ASS<T>::choice(){
        int choose;
        cout<<"please enter which insert you want ? \n";
        cout<<"1- insert first\n";
        cout<<"2- insert last\n";
        cout<<"3- insert position\n";
        cout<<"enter your choice : ";
        cin>>choose;
        cout<<endl;
        while(choose>3||choose<1){
            cout<<"your choice is not valid please, try again : ";
            cin>>choose;
        }
        return choose;
}
template <class T>
void linked_list_ASS<T>::Creat_or_insert(T val){
    int choose=choice(),position;
    switch (choose) {
           case 1:
            this->insert_first(val);
               break;
           case 2:
            this->insert_last(val);
               break;
           case 3:
               cout<<"enter the position you want to insert in : ";
               lab:
               cin>>position;
                   if(position>this->number_of_element()||position<0){
                       cout<<"this position not found please try again : ";
                       goto lab;
                   }
               if(position==0)
               {
                   this->insert_first(val);
                   return;
               }
             if(position==this->number_of_element()){
                this->insert_last(val);
                return;
            }
            else{
                this->insert_at_position(position, val);
            }
            break;
           default:
               break;
       }
}

//assignment 3



#endif
