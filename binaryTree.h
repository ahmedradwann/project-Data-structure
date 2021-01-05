#include"node.h"
#include<queue>
class BinartTree{

    struct Node {
        int value;
        Node* left;
        Node* right;
        Node(int value) {
            this->value = value;
            this->left = NULL;
            this->right = NULL;
        }
    };

private:
	Node *root;
	int numNodes;
public:
	BinartTree();
	void insert(int);
	void insertRec(Node*,int);
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
	void deletDeepestNode(Node* , Node* );
	int height();
	int heightRec(Node*);
	int size();
	bool isEmpty();
};
BinartTree::BinartTree(){
	this->root = NULL;
	this->numNodes= 0;
}
void BinartTree::inOrder(){
	cout<<"\n";
	inOrderRec(root);
	cout<<"\n";
}
void BinartTree::inOrderRec(Node* currentNode){
	if(currentNode != NULL){
	inOrderRec(currentNode->left);
	cout<<currentNode->value<<"  ";
	inOrderRec(currentNode->right);
	}
}
void BinartTree::preOrder(){
	cout<<"\n";
	preOrderRec(root);
	cout<<"\n";
}
void BinartTree::preOrderRec(Node* currentNode){
	if(currentNode == NULL)
		return;
	cout<<currentNode->value<<"  ";
	preOrderRec(currentNode->left);
	preOrderRec(currentNode->right);
}
void BinartTree::postOrder(){
	cout<<"\n";
	postOrderRec(root);
	cout<<"\n";
}
void BinartTree::postOrderRec(Node* currentNode){
	if(currentNode == NULL)
		return;
	inOrderRec(currentNode->left);
	inOrderRec(currentNode->right);
	cout<<currentNode->value<<"  ";
}
void BinartTree::levelOrder(){
	int h = height();
	cout<<"\n";
	for (int level = 1; level <= h; level++){
        printCurrentLevel(root, level);
		//cout<<"\n";
	}
	cout<<"\n";
}
void BinartTree::printCurrentLevel(Node* root, int level){
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
int BinartTree::height(){
	return heightRec(root);
}
int BinartTree::heightRec(Node* currentNode){
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
int BinartTree::size(){
	return numNodes;
}
bool BinartTree::search(int value){
	return searchRec(root,value);
}
bool BinartTree::searchRec(Node* currentNode , int value){
    if (currentNode == NULL)
        return false;
 
    if (currentNode->value == value)
        return true;
    bool result = searchRec(currentNode->left, value);
	if(result) return result;
    return searchRec(currentNode->right, value);
}
void BinartTree::insert(int value){
	numNodes++;
	if (root == NULL) {
        root = new Node(value);
        return ;
    }
    queue<Node*> q;
    q.push(root);
 
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
 
        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = new Node(value);
			return;
        }
 
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = new Node(value);
			return;
        }
    }
}
bool BinartTree::deleteValue(int value){
	if(root == NULL || !search(value))
		return false;
	root = deleteValueRec(root,value);
	numNodes--;
	return true;
}
Node* BinartTree::deleteValueRec(Node* root,int value){
	if (root == NULL) 
        return root; 
  
    if (root->left == NULL && root->right == NULL) { 
		if (root->value == value) 
            return NULL; 
        else
            return root; 
    } 
  
    queue<Node*> q; 
    q.push(root); 
  
    Node* temp; 
    Node* node_to_be_deleted = NULL;
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
void BinartTree::deletDeepestNode(Node* root, Node* d_node) { 
    queue<Node*> q; 
    q.push(root); 
    Node* temp; 
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
bool BinartTree::isEmpty(){
	return root == NULL;
}
#endif