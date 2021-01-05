#ifndef NODE_H
#define NODE_H
#include<iostream>
#include<assert.h>
using namespace std;
struct Node{
	int value;
	Node *left;
	Node *right;
	Node( int value){
		this->value = value;
		this->left = NULL;
		this->right = NULL;
	}
};
#endif