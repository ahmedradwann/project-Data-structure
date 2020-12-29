
#ifndef linked_list_h
#define linked_list_h
#include "classes decleration.h"
//single linked list
template <class T>
linked_list<T>::linked_list(){
    head=NULL;
    tail=NULL;
    count=0;
}
template <class T>
void linked_list<T>::insert_first(T val){
    node<T> *new_node=new node<T>;
    new_node->next=NULL;
    new_node->val=val;
    if(head==NULL){
        head=tail=new_node;
    }
    else{
        new_node->next=head;
        head=new_node;
    }
    count++;
}
template <class T>
void linked_list<T>::deletion_first(){
    if(head==NULL){
        cout<<"the linked list under flow\n";
        return;
    }
    node<T> *temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
    count--;
}
template <class T>
void linked_list<T>::insert_last(T val){
    node<T> *new_node=new node<T>;
    new_node->next=NULL;
    new_node->val=val;
    if(head==NULL){
        head=tail=new_node;
    }
    else{
        tail->next=new_node;
        tail=new_node;
    }
    count++;
}
template <class T>
void linked_list<T>::deletion_last(){
    if(head==NULL){
        cout<<"the linked list under flow\n";
        return;
    }
    node<T> *cur=head,*temp=tail;
    while(cur->next->next!=NULL)
        cur=cur->next;
    cur->next=NULL;
    tail=cur;
    temp->next=NULL;
    delete temp;
    count--;
}
template <class T>
void linked_list<T>::isert_after_value(T val_linked,T val_add){
    node<T> *temp=head;
    while (temp!=NULL) {
        if(temp->val==val_linked)
            break;
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"this value not found\n";
        return;
    }
    else{
        node<T> *new_node=new node<T>;
        new_node->val=val_add;
        new_node->next=NULL;
        new_node->next=temp->next;
        temp->next=new_node;
    }
}
template <class T>
void linked_list<T>::deletion_at_position(int pos){
    if(pos>count-1){
        cout<<"this position not found\n";
        return;
    }
    else if(pos==0){
        deletion_first();
    }
    else{
    node<T> *temp=head,*cur=NULL;
    for(int i=0;i<=pos-1;i++){
        cur=temp;
        temp=temp->next;
    }
    cur->next=temp->next;
    temp->next=NULL;
    delete temp;
    }
    count--;
}
template <class T>
int linked_list<T>::number_of_element(){
    return count;
}
template <class T>
void linked_list<T>:: display(){
    node<T> *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

#endif /* linked_list_h */
