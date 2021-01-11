//
//  Tree.h
//  project_Data
//
//

#ifndef Tree_h
#define Tree_h
#include "Classes & Assignments Decleration.h"

//binary tree
template <class T>
BinartTree<T>::BinartTree(){
    this->root = NULL;
    this->numNodes= 0;
}
template <class T>
void BinartTree<T>::inOrder(){
    cout<<"\n";
    inOrderRec(root);
    cout<<"\n";
}
template <class T>
void BinartTree<T>::inOrderRec(Node<T>* currentNode){
    if(currentNode != NULL){
    inOrderRec(currentNode->left);
    cout<<currentNode->value<<"  ";
    inOrderRec(currentNode->right);
    }
}
template <class T>
void BinartTree<T>::preOrder(){
    cout<<"\n";
    preOrderRec(root);
    cout<<"\n";
}
template <class T>
void BinartTree<T>::preOrderRec(Node<T>* currentNode){
    if(currentNode == NULL)
        return;
    cout<<currentNode->value<<"  ";
    preOrderRec(currentNode->left);
    preOrderRec(currentNode->right);
}
template <class T>
void BinartTree<T>::postOrder(){
    cout<<"\n";
    postOrderRec(root);
    cout<<"\n";
}
template <class T>
void BinartTree<T>::postOrderRec(Node<T>* currentNode){
    if(currentNode == NULL)
        return;
    inOrderRec(currentNode->left);
    inOrderRec(currentNode->right);
    cout<<currentNode->value<<"  ";
}
template <class T>
void BinartTree<T>::levelOrder(){
    int h = height();
    cout<<"\n";
    for (int level = 1; level <= h; level++){
        printCurrentLevel(root, level);
    }
    cout<<"\n";
}
template <class T>
void BinartTree<T>::printCurrentLevel(Node<T>* root, int level){
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->value << " ";
    else if (level > 1)
    {
        printCurrentLevel(root->left, level-1);
        printCurrentLevel(root->right, level-1);
    }
}
template <class T>
int BinartTree<T>::height(){
    return heightRec(root);
}
template <class T>
int BinartTree<T>::heightRec(Node<T>* currentNode){
    if (currentNode == NULL)
        return 0;
    else
    {
        
        int leftHeight = heightRec(currentNode->left);
        int rightHeight = heightRec(currentNode->right);
        if (leftHeight > rightHeight)
            return(leftHeight + 1);
        else return(rightHeight + 1);
    }
}
template <class T>
int BinartTree<T>::size(){
    return numNodes;
}
template <class T>
bool BinartTree<T>::search(int value){
    return searchRec(root,value);
}
template <class T>
bool BinartTree<T>::searchRec(Node<T>* currentNode , int value){
    if (currentNode == NULL)
        return false;
 
    if (currentNode->value == value)
        return true;
    bool result = searchRec(currentNode->left, value);
    if(result) return result;
    return searchRec(currentNode->right, value);
}
template <class T>
void BinartTree<T>::insert(int value){
    numNodes++;
    if (root == NULL) {
        root = new Node<T>(value);
        return ;
    }
    queue<Node<T>*> q;
    q.push(root);
 
    while (!q.empty()) {
        Node<T>* temp = q.front();
        q.pop();
 
        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = new Node<T>(value);
            return;
        }
 
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = new Node<T>(value);
            return;
        }
    }
}
template <class T>
bool BinartTree<T>::deleteValue(int value){
    if(root == NULL || !search(value))
        return false;
    root = deleteValueRec(root,value);
    numNodes--;
    return true;
}
template <class T>
Node<T>* BinartTree<T>::deleteValueRec(Node<T>* root,int value){
    if (root == NULL)
        return root;
  
    if (root->left == NULL && root->right == NULL) {
        if (root->value == value)
            return NULL;
        else
            return root;
    }
  
    queue<Node<T>*> q;
    q.push(root);
  
    Node<T>* temp = nullptr;
    Node<T>* node_to_be_deleted = NULL;
    while (!q.empty()) {
        temp = q.front();
        q.pop();
  
        if (temp->value == value)
            node_to_be_deleted = temp;
  
        if (temp->left)
            q.push(temp->left);
  
        if (temp->right)
            q.push(temp->right);
    }
  
    if (node_to_be_deleted != NULL) {
        int x = temp->value;
        deletDeepestNode(root, temp);
        node_to_be_deleted->value = x;
    }
    return root;
}
template <class T>
void BinartTree<T>::deletDeepestNode(Node<T>* root, Node<T>* d_node) {
    queue<Node<T>*> q;
    q.push(root);
    Node<T>* temp;
    while (!q.empty()) {
        temp = q.front();
        q.pop();
        if (temp == d_node) {
            temp = NULL;
            delete(d_node);
            return;
        }
        if (temp->right) {
            if (temp->right == d_node) {
                temp->right = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->right);
        }
  
        if (temp->left) {
            if (temp->left == d_node) {
                temp->left = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->left);
        }
    }
}
template <class T>
bool BinartTree<T>::isEmpty(){
    return root == NULL;
}

// Binary search tree

template <class T>
BinartSearchTree<T>::BinartSearchTree(){
    this->root = NULL;
    this->numNodes= 0;
}
template <class T>
void BinartSearchTree<T>::inOrder(){
    cout<<"\n";
    inOrderRec(root);
    cout<<"\n";
}
template <class T>
void BinartSearchTree<T>::inOrderRec(Node<T>* currentNode){
    if(currentNode != NULL){
    inOrderRec(currentNode->left);
    cout<<currentNode->value<<"  ";
    inOrderRec(currentNode->right);
    }
}
template <class T>
void BinartSearchTree<T>::preOrder(){
    cout<<"\n";
    preOrderRec(root);
    cout<<"\n";
}
template <class T>
void BinartSearchTree<T>::preOrderRec(Node<T>* currentNode){
    if(currentNode == NULL)
        return;
    cout<<currentNode->value<<"  ";
    preOrderRec(currentNode->left);
    preOrderRec(currentNode->right);
}
template <class T>
void BinartSearchTree<T>::postOrder(){
    cout<<"\n";
    postOrderRec(root);
    cout<<"\n";
}
template <class T>
void BinartSearchTree<T>::postOrderRec(Node<T>* currentNode){
    if(currentNode == NULL)
        return;
    inOrderRec(currentNode->left);
    inOrderRec(currentNode->right);
    cout<<currentNode->value<<"  ";
}
template <class T>
void BinartSearchTree<T>::levelOrder(){
    int h = height();
    cout<<"\n";
    for (int level = 1; level <= h; level++){
        printCurrentLevel(root, level);
    }
    cout<<"\n";
}
template <class T>
void BinartSearchTree<T>::printCurrentLevel(Node<T>* root, int level){
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->value << " ";
    else if (level > 1)
    {
        printCurrentLevel(root->left, level-1);
        printCurrentLevel(root->right, level-1);
    }
}
template <class T>
int BinartSearchTree<T>::height(){
    return heightRec(root);
}
template <class T>
int BinartSearchTree<T>::heightRec(Node<T>* currentNode){
    if (currentNode == NULL)
        return 0;
    else
    {
        
        int leftHeight = heightRec(currentNode->left);
        int rightHeight = heightRec(currentNode->right);
        if (leftHeight > rightHeight)
            return(leftHeight + 1);
        else return(rightHeight + 1);
    }
}
template <class T>
int BinartSearchTree<T>::size(){
    return numNodes;
}
template <class T>
bool BinartSearchTree<T>::search(int value){
    return searchRec(root,value);
}
template <class T>
bool BinartSearchTree<T>::searchRec(Node<T>* currentNode , int value){
    if (currentNode == NULL )
       return false;
    if(currentNode->value == value)
        return true;
    if (currentNode->value < value)
        return searchRec(currentNode->right, value);
    return searchRec(currentNode->left, value);
}
template <class T>
bool BinartSearchTree<T>::insert(int value){
    if(search(value))
        return false;
    this->root = insertRec(root , value);
    numNodes++;
    return true;
}
template <class T>
Node<T>* BinartSearchTree<T>::insertRec(Node<T>* root,int value){
    if (root == NULL)
    {
        return new Node<T>(value);
    }
    if (value > root->value)
    {
        root->right = insertRec(root->right, value);
    }
    else
    {
        root->left = insertRec(root->left, value);
    }
    return root;
}
template <class T>
bool BinartSearchTree<T>::deleteValue(int value){
    if(root == NULL || !search(value))
        return false;
    root = deleteValueRec(root,value);
    numNodes--;
    return true;
}
template <class T>
Node<T>* BinartSearchTree<T>::deleteValueRec(Node<T>* root,int value){
    if (root == NULL)
        return root;
    if (value < root->value)
        root->left = deleteValueRec(root->left, value);
    else if (value > root->value)
        root->right = deleteValueRec(root->right, value);
    else {
        if (root->left == NULL) {
            Node<T>* temp = root->right;
            delete(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node<T>* temp = root->left;
            delete(root);
            return temp;
        }
        Node<T>* temp = getInorderSuccessor(root->right);
        root->value = temp->value;
        root->right = deleteValueRec(root->right, temp->value);
    }
    return root;
}
template <class T>
Node<T>* BinartSearchTree<T>::getInorderSuccessor(Node<T>* currentNode)
{
    Node<T> *temp = currentNode;
    while (temp && temp->left != NULL)
        temp = temp->left;
 
    return temp;
}
template <class T>
bool BinartSearchTree<T>::isEmpty(){
    return root == NULL;
}
#endif /* Tree_h */
