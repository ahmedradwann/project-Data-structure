#ifndef classes_decleration_h
#define classes_decleration_h
#define MAX 100
template <class T>
class node{
    T val;
    node* next;
};
template <class T>
class linked_list{
protected:
    node<T> *head;
    int count=0;
public:
    linked_list();
    void insert_first(T val);
    T deletion_first();
    void insert_last(T val);
    T deletion_last();
    void isert_after_position(int pos,T val);
    T deletion_at_position(int pos);
    int number_of_element();
    void display();
    
};
template <class T>
class linked_list_double{
    node<T> *head,*tail;
public:
    linked_list_double();
    void insert_first(T val);
    T deletion_first();
    void insert_last(T val);
    T deletion_last();
    void isert_at_position(int pos,T val);
    T deletion_at_position(int pos);
    void display();
};
template <class T>
class linked_list_circular{
    node<T> *head;
public:
    linked_list_circular();
    void insert_first(T val);
    T deletion_first();
    void insert_last(T val);
    T deletion_last();
    void isert_at_position(int pos,T val);
    T deletion_at_position(int pos);
    void display();
};
template <class T>
class linked_list_double_circular{
        node<T> *head,*tail;
    public:
        linked_list_double_circular();
        void insert_first(T val);
        T deletion_first();
        void insert_last(T val);
        T deletion_last();
        void isert_at_position(int pos,T val);
        T deletion_at_position(int pos);
        void display();
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
};
template <class T>
class stack_Dynamic{
    int counter;
    T *arr;
    int top;
public:
    stack_Dynamic();
    void push(T val);
    T pop();
    T peak();
    int number_of_element(){return counter;}
    bool IsFull();
    bool IsEmpty();
};
template <class T>
class stack_liked_list : public linked_list<T>{
public:
    void push(T val);
    T pop();
    T peak();
    bool IsFull();
    bool IsEmpty();
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
};
template <class T>
class queue_linked_list : public linked_list<T>{
public:
    queue_linked_list();
    void enqueue(T val);
    T dequeue();
    bool IsFull();
    bool IsEmpty();
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
};
template <class T>
class queue_circular_linked_list : public linked_list<T>{
    queue_circular_linked_list();
    void enqueue(T val);
    T dequeue();
    bool IsFull();
    bool IsEmpty();
};
#endif /* classes_decleration_h */
