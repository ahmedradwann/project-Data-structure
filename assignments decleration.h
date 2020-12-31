#ifndef assignments_decleration_h
#define assignments_decleration_h
template <class T>
class linked_list_ASS: public linked_list<T>{
public:
    void Creat_or_insert_first(T val);
    void Creat_or_insert_last(T val);
    void display();
    int number_of_element();
};
//template <class T>
// لو في ايرور شيل الدبل // من كلاس تيمبليت
class post_fix_evaluate : public stack_Dynamic<int> {
    //size are send in constractor as aprametar and put it equal size variable in base class
    post_fix_evaluate(int size);
    void push();
    int pop();
};
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
template <class T>
class queue_using_stack{
    T* que;
    int top;
public:
    queue_by_stack();
    void push(T);
    T pop();
    bool isEmpty();
    bool isfull();
    void display();
    T deque();
};
#endif /* assignments_decleration_h */