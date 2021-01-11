//
//  Assignments.h
//  project_Data
//
//

#ifndef Assignments_h
#define Assignments_h
#include "Classes & Assignments Decleration.h"
#include "Stack.h"
#include "linked list.h"


//assignment 1
template <class T>
int linked_list_ASS<T>::number_of_element(){
    return this->linked_list<T>::number_of_element();
}
template <class T>
void linked_list_ASS<T>::display(){
    this->linked_list<T>::display();
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

//assignment 2

void poly::insert(int num, int pow){
    node_poly* cur=head;
    while(cur!=NULL){
        if(pow==cur->pow){
            cur->num+=num;
            return;
        }
        cur=cur->next;
    }
    cur=head;
    node_poly* new_node=new node_poly;
    new_node->num=num;
    new_node->pow=pow;
    new_node->next=NULL;
    if(head==NULL)
        head=last=new_node;
    else if(cur->pow<pow){
        new_node->next=head;
        head=new_node;
     }
    else if(last->pow>pow){
        last->next=new_node;
        last=new_node;
     }
    else{
        while(cur->next!=NULL){
        if(cur->next->pow>pow)
        cur=cur->next;
     }
     new_node->next=cur->next;
     cur->next=new_node;
     }
}
node_poly* poly::add(poly obj,poly obj2){
    poly obj3;
    node_poly* p1=obj.get_node(),* p2=obj2.get_node();
    while(p1!=NULL&&p2!=NULL){
        if(p1->pow>p2->pow){
            obj3.insert(p1->num, p1->pow);
            p1=p1->next;
        }
        else if(p1->pow<p2->pow){
            obj3.insert(p2->num, p2->pow);
            p2=p2->next;
        }
        else {
            obj3.insert(p2->num+p1->num, p2->pow);
            p1=p1->next;
            p2=p2->next;
        }
    }
    while(p1!=NULL||p2!=NULL){
        if(p1!=NULL){
            obj3.insert(p1->num, p1->pow);
            p1=p1->next;
        }
        else if(p2!=NULL){
            obj3.insert(p2->num, p2->pow);
            p2=p2->next;
        }
    }
    return obj3.get_node();
}
void poly::display(){
    node_poly *cur=head;
    while(cur!=NULL){
        cout<<cur->num<<" X^ "<<cur->pow;
        if(cur->next!=NULL)
            cout<<" + ";
        cur=cur->next;
    }
    cout<<endl;
}
void equ(string eq1,poly &obj){
    int num{0},pow{0};
    for(int i=0;eq1[i]!='\0';i++){
         if(isdigit(eq1[i])&&eq1[i+1]=='x'){
            num=(int)eq1[i]-'0';
        }
        else if(eq1[i-1]=='x'&&eq1[i]=='^'){
            pow=(int)eq1[i+1]-'0';
        }
        else if(eq1[i]=='+'||eq1[i+1]=='\0'){
            obj.insert(num, pow);
        }
    }
}
void result(node_poly* p1,node_poly* p2,node_poly* p3){
    poly obj;
    obj.set_node(p1);
    cout<<endl;
    cout<<"\t";
    obj.display();
    cout<<"+\n";
    cout<<"\t";
    obj.set_node(p2);
    obj.display();
    cout<<"=\n";
    cout<<"\t";
    obj.set_node(p3);
    obj.display();
    cout<<endl;
}
string get_str(){
    string s1;
    cout<<"enter the  equation : ";
    cin>>s1;
    return s1;
}



//assignment 3

template <>
post_fix_evaluate<float>::post_fix_evaluate(int size):stack_Dynamic<float>(size){
}
template <>
void post_fix_evaluate<float>::push(float val){
    this->stack_Dynamic<float>::push(val);
}
template <>
float post_fix_evaluate<float>::pop(){
    return this->stack_Dynamic<float>::pop();
}
string get_string(){
    string equ;
        cout<<"please, Enter the expression if operand > 9 put it betwean ( )\n";
        cout<<"Expression : ";
        cin>>equ;
    return equ;
}
float process(string equ){
    post_fix_evaluate<float> obj((int)equ.size());
        int i{0};
    float sum{0},val1{0},val2{0};
        while(equ[i]!='\0'){
            if(isdigit(equ[i])){
                obj.push(equ[i]-'0');
                i++;
            }
            else if(equ[i]=='('||equ[i]==')'){
                while(equ[i]!=')'){
                    i++;
                    sum+=equ[i]-'0';
                    i++;
                    if(isdigit(equ[i])){
                        sum*=10;
                        sum+=equ[i]-'0';
                    }
                    i++;
                }
                obj.push(sum);
                sum=0;
                i++;
                
            }
            else{
                switch (equ[i]) {
                    case '+':
                        sum=obj.pop()+obj.pop();
                        obj.push(sum);
                        sum=0;
                        break;
                    case '-':
                        val1=obj.pop();
                        val2=obj.pop();
                        sum=val2-val1;
                        obj.push(sum);
                        sum=0;
                        break;
                    case '*':
                        sum=obj.pop()*obj.pop();
                        obj.push(sum);
                        sum=0;
                        break;
                    case '/':
                        val1=(float)obj.pop();
                        val2=(float)obj.pop();
                        sum=(float)val2/val1;
                        obj.push(sum);
                        sum=0;
                        break;
                    case '^':
                        val1=obj.pop();
                        val2=obj.pop();
                        sum=pow(val2,val1);
                        obj.push(sum);
                        sum=0;
                        break;
                    default:
                        break;
                }
                i++;
            }
        }
        return obj.pop();
}




//assignment 4 <inheritance>
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
#endif /* Assignments_h */
