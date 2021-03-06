//
//  ahmed Assignment decle.h
//  Assignment 5
//
//  Created by ahmed radwan on 31/12/2020.
//

#ifndef ahmed_Assignment_decle_h
#define ahmed_Assignment_decle_h
template <class T>
class queue_using_stack:stack_Dynamic<T>{
public:
    queue_using_stack(int size);
    void enqueue(T);
    bool isEmpty();
    bool isfull();
    void display();
    T deque();
};
template <class T>
class linked_list_ASS: public linked_list<T>{
public:
    void Creat_or_insert(T val);
    void display();
    int number_of_element();
    int choice();
};
template <class T>
class post_fix_evaluate : public stack_Dynamic<T> {
    //size are send in constractor as aprametar and put it equal size variable in base class
public:
    post_fix_evaluate(int size);
    void push(float val);
    float pop();
};
float process(string equ);
string get_string();
// in main proccess(get_string())

class poly{
    node* head,*last;
public:
    poly(){head=NULL;last=NULL;}
    //function proto type of the class
    void insert(int num,int pow);
    void set_node(node* head){this->head=head;}
    node* get_node(){return head;}
    node* add(poly p1,poly p2);
    void display();
};
void equ(string eq1,poly &obj);
void result(node* p1,node* p2,node* p3);
string get_str();

//in main
/*
 poly obj,obj2,obj3;

 equ(get_str(), obj);
 
 equ(get_str(), obj2);
 
 obj3.set_node(obj3.add(obj, obj2));
 
 result(obj.get_node(), obj2.get_node(), obj3.get_node());
 */
#endif /* ahmed_Assignment_decle_h */
