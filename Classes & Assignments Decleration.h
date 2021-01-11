//
//  Classes Decleration.h
//  project_Data
//
//

#ifndef Classes_Decleration_h
#define Classes_Decleration_h
#include "nodes.h"
template <class T>
class BinartSearchTree{
private:
    Node<T> *root;
    int numNodes;
public:
    BinartSearchTree();
    bool insert(int);
    Node<T>* insertRec(Node<T>*,int);
    bool search(int);
    bool searchRec(Node<T>*,int);
    void inOrder();
    void inOrderRec(Node<T>*);
    void preOrder();
    void preOrderRec(Node<T>*);
    void postOrder();
    void postOrderRec(Node<T>*);
    void levelOrder();
    void printCurrentLevel(Node<T>*, int);
    bool deleteValue(int);
    Node<T>* deleteValueRec(Node<T>*,int);
    Node<T>* getInorderSuccessor(Node<T>*);
    int height();
    int heightRec(Node<T>*);
    int size();
    bool isEmpty();
};
template <class T>
class BinartTree{
private:
    Node<T> *root;
    int numNodes;
public:
    BinartTree();
    void insert(int);
    void insertRec(Node<T>*,int);
    bool search(int);
    bool searchRec(Node<T>*,int);
    void inOrder();
    void inOrderRec(Node<T>*);
    void preOrder();
    void preOrderRec(Node<T>*);
    void postOrder();
    void postOrderRec(Node<T>*);
    void levelOrder();
    void printCurrentLevel(Node<T>*, int);
    bool deleteValue(int);
    Node<T>* deleteValueRec(Node<T>*,int);
    void deletDeepestNode(Node<T>* , Node<T>* );
    int height();
    int heightRec(Node<T>*);
    int size();
    bool isEmpty();
};

template <class T>
class linked_list{
protected:
    node<T> *head,*tail;
    int count;
public:
    linked_list();
    void insert_first(T val);
    void deletion_first();
    void insert_last(T val);
    void insert_at_position(int pos, T element);
    void deletion_last();
    void isert_after_value(T val_linked,T val_add);
    void deletion_at_position(int pos);
    int number_of_element();
    void display();
    ~linked_list();
};
template <class T>
class linked_list_double{
    Double_node<T> *head,*tail;
    int count;
public:
    linked_list_double();
    void insert_first(T val);
    void deletion_first();
    void insert_last(T val);
    void deletion_last();
    void isert_at_position(int pos,T val);
    void deletion_at_position(int pos);
    int number_of_element();
    void display_from_start();
    void display_from_end();
    ~linked_list_double();

};
template <class T>
class linked_list_circular{
    node<T> *head,*tail;
    int count;
public:
    linked_list_circular();
    void insert_first(T val);
    void deletion_first();
    void insert_last(T val);
    void deletion_last();
    void isert_at_position(int pos,T val);
    void deletion_at_position(int pos);
    void display();
    int number_of_element();
    ~linked_list_circular();
};

template <class T>
class linked_list_double_circular{
    Double_node<T> *head,*tail;
        int count;
    public:
        linked_list_double_circular();
        void insert_first(T val);
        void deletion_first();
        void insert_last(T val);
        void deletion_last();
        void isert_at_position(int pos,T val);
        void deletion_at_position(int pos);
        int number_of_element();
        void display_from_start();
        void display_from_end();
    ~linked_list_double_circular();
    };
template <class T>
class stack_array{
    int counter;
    T arr[MAX];
    int top;
public:
    stack_array();
    void push(T val);
    T pop();
    T peak();
    int number_of_element(){return counter;}
    bool IsFull();
    bool IsEmpty();
    void Display();
};
template <class T>
class stack_Dynamic{
protected:
    int counter;
    T *arr;
    int top,size;
public:
    stack_Dynamic(int size);
    void push(T val);
    T pop();
    T peak();
    int number_of_element(){return counter;}
    bool IsFull();
    bool IsEmpty();
    void display();
    ~stack_Dynamic();
};
template <class T>
class stack_liked_list : public linked_list<T>{
public:
    void push(T val);
    T pop();
    T peak();
    bool IsFull();
    bool IsEmpty();
    void dispaly_stack();
};
template <class T>
class queue_array{
    int counter;
    T arr[MAX];
    int front,rear;
public:
    queue_array();
    void enqueue(T val);
    T dequeue();
    int number_of_element(){return counter;}
    bool IsFull();
    bool IsEmpty();
    void display();
};
template <class T>
class queue_linked_list : public linked_list<T>{
public:
    queue_linked_list();
    void enqueue(T val);
    void dequeue();
    bool IsFull();
    bool IsEmpty();
    ~queue_linked_list();
    void display();

};
template <class T>
class queue_circular_array{
    int counter;
    T arr[MAX];
    int front,rear;
public:
    queue_circular_array();
    void enqueue(T val);
    T dequeue();
    int number_of_element(){return counter;}
    bool IsFull();
    bool IsEmpty();
    void display();
};
template <class T>
class queue_circular_linked_list : public linked_list_circular<T>{
public:
    queue_circular_linked_list();
    void enqueue(T val);
    void dequeue();
    bool IsFull();
    bool IsEmpty();
    ~queue_circular_linked_list();
    void display();
};

// Assignment 1 decleration
template <class T>
class linked_list_ASS: public linked_list<T>{
public:
    void Creat_or_insert(T val);
    void display();
    int number_of_element();
    int choice();
};
// Assignment 2 decleration

class poly{
    node_poly* head,*last;
public:
    poly(){head=NULL;last=NULL;}
    //function proto type of the class
    void insert(int num,int pow);
    void set_node(node_poly* head){this->head=head;}
    node_poly* get_node(){return head;}
    node_poly* add(poly p1,poly p2);
    void display();
};
void equ(string eq1,poly &obj);
void result(node_poly* p1,node_poly* p2,node_poly* p3);
string get_str();


// Assignment 3 decleration
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



// Assignment 4 decleration
template <class T>
class queue_using_stack:stack_Dynamic<T>{
public:
    queue_using_stack(int size);
    void enqueue(T);
    bool isEmpty();
    bool isfull();
    void display();
    int number_of_element(){
        return this->counter;
    }
    T deque();
};

#endif /* Classes_Decleration_h */
