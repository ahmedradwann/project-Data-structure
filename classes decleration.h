#ifndef classes_decleration_h
#define classes_decleration_h
#define MAX 100
struct node_poly{
    int num,pow;
    node* next;
};
template <class T>
struct node{
    T val;
    node* next;
};
template <class T>
struct Double_node{
    T val;
    node<T> *next,*prev;
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
    int number_of_element()
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
};
template <class T>
class stack_Dynamic{
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
    T dequeue();
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
class queue_circular_linked_list : public linked_list<T>{
    queue_circular_linked_list();
    void enqueue(T val);
    T dequeue();
    bool IsFull();
    bool IsEmpty();
    ~queue_circular_linked_list();
    void display();
};
#endif /* classes_decleration_h */
