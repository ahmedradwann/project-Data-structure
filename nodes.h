//
//  nodes.h
//  project_Data
//
//

#ifndef nodes_h
#define nodes_h
#include <iostream>
#include <queue>
#include<assert.h>
#define MAX 100
using namespace std;
template <class T>
struct Node{
    T value;
    Node<T> *left;
    Node<T> *right;
    Node(T value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
struct node_poly{
    int num,pow;
    node_poly *next;
};
template <class T>
struct node{
    T val;
    node<T>* next;
};
template <class T>
struct Double_node{
    T val;
    Double_node<T> *next,*prev;
};
#endif /* nodes_h */
