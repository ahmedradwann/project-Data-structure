
#ifndef stack_h
#define stack_h
#include "classes decleration.h"
using namespace std;
class stack_dynamic
{
private:
	struct Node
	{
		int data;;
		node* next;


		node(int data, node* next = NULL;)
		{
			this->data = data;
			this->next = next;


		}
	};
	node* top;
public:
	stack_dynamic()
	{

		top = NULL;
	}
	void push(int element);
	int pop();
	bool Is_Empty();
};
void stack_dynamic::push(int element)
{

	top = new Node(element, top);



}
int stack_dynamic::pop()
{
	int element = top->data;
	Node* temp = new Node;
	temp = top;
	top = top->next;
	delete temp;
	return element;

}

bool stack_dynamic::Is_Empty()
{
	if (top == NULL)
	{
		cout << "it is true " << endl;
		return 1;

	}
	else
	{
		cout << " it is false " << endl;
		return 0;


	}
}
#endif /* stack_h */
