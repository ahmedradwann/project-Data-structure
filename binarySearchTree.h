#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include"node.h"
class BinartSearchTree{
private:
	Node *root;
	int numNodes;
public:
	BinartSearchTree();
	bool insert(int);
	Node* insertRec(Node*,int);
	bool search(int);
	bool searchRec(Node*,int);
	void inOrder();
	void inOrderRec(Node*);
	void preOrder();
	void preOrderRec(Node*);
	void postOrder();
	void postOrderRec(Node*);
	void levelOrder();
	void printCurrentLevel(Node*, int);
	bool deleteValue(int);
	Node* deleteValueRec(Node*,int);
	Node* getInorderSuccessor(Node*);
	int height();
	int heightRec(Node*);
	int size();
	bool isEmpty();
};
BinartSearchTree::BinartSearchTree(){
	this->root = NULL;
	this->numNodes= 0;
}
void BinartSearchTree::inOrder(){
	cout<<"\n";
	inOrderRec(root);
	cout<<"\n";
}
void BinartSearchTree::inOrderRec(Node* currentNode){
	if(currentNode != NULL){
	inOrderRec(currentNode->left);
	cout<<currentNode->value<<"  ";
	inOrderRec(currentNode->right);
	}
}
void BinartSearchTree::preOrder(){
	cout<<"\n";
	preOrderRec(root);
	cout<<"\n";
}
void BinartSearchTree::preOrderRec(Node* currentNode){
	if(currentNode == NULL)
		return;
	cout<<currentNode->value<<"  ";
	preOrderRec(currentNode->left);
	preOrderRec(currentNode->right);
}
void BinartSearchTree::postOrder(){
	cout<<"\n";
	postOrderRec(root);
	cout<<"\n";
}
void BinartSearchTree::postOrderRec(Node* currentNode){
	if(currentNode == NULL)
		return;
	inOrderRec(currentNode->left);
	inOrderRec(currentNode->right);
	cout<<currentNode->value<<"  ";
}
void BinartSearchTree::levelOrder(){
	int h = height();
	cout<<"\n";
	for (int level = 1; level <= h; level++){
        printCurrentLevel(root, level);
		//cout<<"\n";
	}
	cout<<"\n";
}
void BinartSearchTree::printCurrentLevel(Node* root, int level){
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
int BinartSearchTree::height(){
	return heightRec(root);
}
int BinartSearchTree::heightRec(Node* currentNode){
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
int BinartSearchTree::size(){
	return numNodes;
}
bool BinartSearchTree::search(int value){
	return searchRec(root,value);
}
bool BinartSearchTree::searchRec(Node* currentNode , int value){
    if (currentNode == NULL ) 
       return false;
	if(currentNode->value == value)
		return true;
	if (currentNode->value < value) 
		return searchRec(currentNode->right, value);
    return searchRec(currentNode->left, value); 
}
bool BinartSearchTree::insert(int value){
	// if value is already exist 
	if(search(value))
		return false;
	this->root = insertRec(root , value);
	numNodes++;
	return true;
}
Node* BinartSearchTree::insertRec(Node* root,int value){
	if (root == NULL)  
    {
		return new Node(value); 
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
bool BinartSearchTree::deleteValue(int value){
	if(root == NULL || !search(value))
		return false;
	root = deleteValueRec(root,value);
	numNodes--;
	return true;
}
Node* BinartSearchTree::deleteValueRec(Node* root,int value){
	if (root == NULL)
        return root;
    if (value < root->value)
        root->left = deleteValueRec(root->left, value);
    else if (value > root->value)
        root->right = deleteValueRec(root->right, value);
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete(root);
            return temp;
        }
		Node* temp = getInorderSuccessor(root->right);
        root->value = temp->value;
		root->right = deleteValueRec(root->right, temp->value);
    }
    return root;
}
Node* BinartSearchTree::getInorderSuccessor(Node* currentNode)
{
    Node *temp = currentNode;
    while (temp && temp->left != NULL)
        temp = temp->left;
 
    return temp;
}
bool BinartSearchTree::isEmpty(){
	return root == NULL;
}
#endif