
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
    if(head==tail){
        node<T> *temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    else{
    node<T> *temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
    count--;
    }
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
    if(head==tail){
        node<T> *temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    else{
    node<T> *cur=head,*temp=tail;
    while(cur->next->next!=NULL)
        cur=cur->next;
    cur->next=NULL;
    tail=cur;
    temp->next=NULL;
    delete temp;
    count--;
    }
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
template <class T>
linked_list<T>::~linked_list(){
    node<T> *temp=NULL;
    while(head!=NULL){
        temp=head;
        temp->next=NULL;
        delete temp;
        head=head->next;
    }
}

//double linked list

template <class T>
linked_list_double<T>::linked_list_double(){
    count=0;
    head=tail=NULL;
}
template <class T>
void linked_list_double<T>::insert_first(T val){
    Double_node<T> *new_node=new Double_node<T>;
    new_node->next=NULL;
    new_node->prev=NULL;
    new_node->val=val;
    count++;
    if(head==NULL){
        head=tail=new_node;
    }
    else{
        head->prev=new_node;
        new_node->next=head;
        head=new_node;
    }
}
template <class T>
void linked_list_double<T>::deletion_first(){
    if(head==NULL){
        cout<<"under flow\n";
        return;
    }
    count--;
    Double_node<T> *temp=head;
    if(head==tail){
        temp=NULL;
        delete temp;
        head=tail=NULL;
    }
    else{
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
    }
}
template <class T>
void linked_list_double<T>::insert_last(T val){
    Double_node<T> *new_node=new Double_node<T>;
    new_node->next=NULL;
    new_node->prev=NULL;
    new_node->val=val;
    if(head==NULL){
        head=tail=new_node;
    }
    else{
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
    count++;
}
template <class T>
void linked_list_double<T>::deletion_last(){
    if(head==NULL){
        cout<<"under flow\n";
        return;
    }
    count--;
    Double_node<T> *temp=tail;
    if(head==tail){
        temp=NULL;
        delete temp;
        head=tail=NULL;
    }
    else{
    tail=tail->prev;
    tail->next=NULL;
    temp->prev=NULL;
    delete temp;
    }
}
template <class T>
void linked_list_double<T>::isert_at_position(int pos,T val){
    if(pos>count){
        cout<<"this posision not found\n";
        return;
    }
    Double_node<T> *new_node=new Double_node<T>;
    new_node->next=NULL;
    new_node->prev=NULL;
    new_node->val=val;
    count++;
    if(pos==0)
        insert_first(val);
    else if(pos==count)
        insert_last(val);
    else{
        Double_node<T> *temp=head;
        for(int i=0;i<pos-1;i++)
            temp=temp->next;
        new_node->next=temp->next;
        new_node->prev=temp;
        temp->next=new_node;
        temp=temp->next->next;
        temp->prev=new_node;
    }
}
template <class T>
void linked_list_double<T>::deletion_at_position(int pos){
    if(pos>count){
        cout<<"this posision not found\n";
        return;
    }
    Double_node<T> *cur=head,*temp=NULL;
    if(pos==0)
        deletion_first();
    else if(pos==count)
        deletion_last();
    else{
        for(int i=0;i<pos;i++)
            cur=cur->next;
        temp=cur->prev;
        temp->next=cur->next;
        temp=cur->next;
        temp->prev=cur->prev;
        cur->prev=NULL;
        cur->next=NULL;
        delete cur;
        count--;
    }
}
template <class T>
int linked_list_double<T>::number_of_element(){
    return count;
}
template <class T>
void linked_list_double<T>::display_from_start(){
    Double_node<T> *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
template <class T>
void linked_list_double<T>::display_from_end(){
    Double_node<T> *temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
template <class T>
linked_list_double<T>::~linked_list_double(){
    Double_node<T> *temp=NULL;
    while(head!=NULL){
        temp=head;
        temp->prev=NULL;
        temp->next=NULL;
        delete temp;
        head=head->next;
    }
}

//circular linked list

template <class T>
linked_list_circular<T>::linked_list_circular(){
    head=NULL;
    tail=NULL;
    count=0;
}
template <class T>
void linked_list_circular<T>::insert_first(T val){
    node<T> *new_node=new node<T>;
    count++;
    new_node->next=NULL;
    new_node->val=val;
    if(head==NULL){
        head=tail=new_node;
        tail->next=head;
    }
    else{
        new_node->next=head;
        head=new_node;
        tail->next=head;
    }
}
template <class T>
void linked_list_circular<T>::deletion_first(){
    if(head==NULL){
        cout<<"the linked list under flow\n";
        return;
    }
    if(head==tail){
   node<T> *cur=head;
       head=NULL;
       tail=NULL;
       delete cur;
   }
    else{
    node<T> *temp=head;
    tail->next=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
    }
    count--;
}
template <class T>
void linked_list_circular<T>::insert_last(T val){
    node<T> *new_node=new node<T>;
    new_node->next=NULL;
    new_node->val=val;
    count++;
    if(head==NULL){
        head=tail=new_node;
        tail->next=head;
    }
    else{
        tail->next=new_node;
        tail=new_node;
        tail->next=head;
    }
}
template <class T>
void linked_list_circular<T>::deletion_last(){
    if(head==NULL){
        cout<<"the linked list under flow\n";
        return;
    }
    if(head==tail){
   node<T> *cur=head;
       head=NULL;
       tail=NULL;
       delete cur;
   }
    else{
    node<T> *cur=head,*temp=tail;
        while(cur->next!=tail)
        cur=cur->next;
    cur->next=NULL;
    tail=cur;
    tail->next=head;
    temp->next=NULL;
    delete temp;
    }
    count--;
}
template <class T>
void linked_list_circular<T>::isert_at_position(int pos,T val){
    if(pos>count){
        cout<<"this position not found\n";
        return;
    }
    node<T> *new_node=new node<T>;
    new_node->val=val;
    new_node->next=NULL;
    if(pos==0){
        insert_first(val);
    }
    else if(pos==count){
        insert_last(val);
    }
    else{
    node<T> *temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    count++;
    }

}
template <class T>
void linked_list_circular<T>::deletion_at_position(int pos)
{
    if(pos>count){
        cout<<"this position not found\n";
        return;
    }
    if(pos==0){
        deletion_first();
    }
    else if(pos==count-1){
        deletion_last();
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
    count--;
    }
}
template <class T>
void linked_list_circular<T>::display(){
    if(head==NULL){
        cout<<"the linked listf is empty\n";
        return;
    }
    node<T> *cur=head;
    while(cur!=tail){
        cout<<cur->val<<" ";
        cur=cur->next;
        
    }
    if(cur==tail){
        cout<<cur->val;
    }
    cout<<endl;
}
template <class T>
int linked_list_circular<T>::number_of_element(){
    return count;
}

template <class T>
linked_list_circular<T>::~linked_list_circular(){
    node<T> *temp=NULL;
    while(head!=tail){
        temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        if(head==tail){
            temp=head;
            temp->next=NULL;
            head=tail=NULL;

            delete temp;
        }
    }
        
}

//Double circular linked list

template <class T>
linked_list_double_circular<T>::linked_list_double_circular(){
    head=tail=NULL;
    count=0;
}
template <class T>
void linked_list_double_circular<T>::insert_first(T val){
    count++;
    Double_node<T> *new_node=new Double_node<T>;
    new_node->val=val;
    new_node->next=NULL;
    new_node->prev=NULL;
    if(head==NULL){
        head=tail=new_node;
        head->next=tail;
        head->prev=tail;
    }
    else{
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        head->prev=tail;
        tail->next=head;
    }
}
template <class T>
void linked_list_double_circular<T>::deletion_first(){
    if(head==NULL){
        cout<<"under flow\n";
        return;
    }
    count--;
    Double_node<T> *temp=head;
    if(head==tail){
        head=tail=NULL;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    else{
        head=head->next;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
        tail->next=head;
        head->prev=tail;
    }
}
template <class T>
void linked_list_double_circular<T>::insert_last(T val){
    count++;
    Double_node<T> *new_node=new Double_node<T>;
    new_node->val=val;
    new_node->next=NULL;
    new_node->prev=NULL;
    if(head==NULL){
        head=tail=new_node;
        tail->next=head;
        tail->prev=head;
    }
    else{
        new_node->prev=tail;
        tail->next=new_node;
        tail=new_node;
        head->prev=tail;
        tail->next=head;
    }
}
template <class T>
void linked_list_double_circular<T>::deletion_last(){
    if(head==NULL){
        cout<<"under flow\n";
        return;
    }
    count--;
    Double_node<T> *temp=tail;
    if(head==tail){
        head=tail=NULL;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    else{
        tail=tail->prev;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
        tail->next=head;
        head->prev=tail;
    }
}
template <class T>
void linked_list_double_circular<T>::isert_at_position(int pos,T val){
    if(pos>count){
        cout<<"this position not found\n";
        return;
    }
    if(pos==0)
        insert_first(val);
    else if(pos==count)
        insert_last(val);
    else{
        count++;
        Double_node<T> *temp=head,*new_node=new Double_node<T>;
        new_node->val=val;
        new_node->prev=NULL;
        new_node->next=NULL;
        for(int i=0;i<pos-1;i++)
            temp=temp->next;
        new_node->next=temp->next;
        new_node->prev=temp;
        temp->next=new_node;
        temp=new_node->next;
        temp->prev=new_node;
        
    }
}
template <class T>
void linked_list_double_circular<T>::deletion_at_position(int pos){
    if(pos>count){
        cout<<"this position not found\n";
        return;
    }
    if(pos==0)
        deletion_first();
    else if(pos==count)
        deletion_last();
    else{
        Double_node<T> *temp=head,*cur=NULL;
        for(int i=0;i<pos-1;i++)
            temp=temp->next;
        cur=temp->prev;
        cur->next=temp->next;
        cur=temp->next;
        cur->prev=temp->prev;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
        count--;
    }
}
template <class T>
int linked_list_double_circular<T>::number_of_element(){
    return count;
}
template <class T>
void linked_list_double_circular<T>::display_from_start(){
    if(head==NULL){
        cout<<"the linked is empty\n";
        return;
    }
    Double_node<T> *cur=head;
    if(head==NULL){
        cout<<"the linked listf is empty\n";
        return;
    }
    while(cur!=tail){
        cout<<cur->val<<" ";
        cur=cur->next;
    }
    if(cur==tail)
        cout<<cur->val<<endl;
    }
template <class T>
void linked_list_double_circular<T>::display_from_end(){
    if(head==NULL){
        cout<<"the linked is empty\n";
        return;
    }
    Double_node<T> *temp=tail;
    while(temp!=head){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    if(temp==head)
        cout<<temp->val<<endl;
}
template <class T>
linked_list_double_circular<T>::~linked_list_double_circular(){
    Double_node<T> *temp=NULL;
    while(head!=tail){
        temp=head;
        head=head->next;
        temp->prev=NULL;
        temp->next=NULL;
        delete temp;
        if(head==tail){
            temp=head;
            temp->next=NULL;
            head=tail=NULL;
            delete temp;
        }
    }
}
#endif /* linked_list_h */
