#include"binarySearchTree.h"
#include"binaryTree.h"
void binaryTreeMenu(BinartTree &);
void binarySearchTreeMenu(BinartSearchTree &);
int main(){
	int choice;
	BinartSearchTree BST;
	BinartTree BT;
	do{
		cout<<"1- Binary Tree\n";
		cout<<"2- Binary Search Tree\n";
		cout<<"3- Exit\n";
		cin>>choice;
		if(choice == 1)
			binaryTreeMenu(BT);
		else if( choice == 2)
			binarySearchTreeMenu(BST);
		else if( choice == 3)
			break;
		else
			cout<<"\a\a\a\a\aInvalid choice, please choice [1-3]\n";
		system("pause");
		system("cls");
	}while(true);
	cout<<"thank you for your Time\n";
	system("pause");
	return 0;
}

void binaryTreeMenu(BinartTree &BT){
	int choice;
	int value;
	do{
		system("pause");
		system("cls");
		cout<<"1- insert Value\n";
		cout<<"2- delete value\n";
		cout<<"3- search for value\n";
		cout<<"4- is Tree Empty\n";
		cout<<"5- number of nodes\n";
		cout<<"6- tree height\n";
		cout<<"7- print tree inOrder\n";
		cout<<"8- print tree preOrder\n";
		cout<<"9- print tree postOrder\n";
		cout<<"10- print tree level by level\n";
		cout<<"11- return\n";

		cin>>choice;
		if(choice == 1){
			cout<<"please enter integer value to insert it\n";
			cin>>value;
			BT.insert(value);
			cout<<value<<" has been added successfully to Binary Tree\n";
		}
		else if( choice == 2){
			cout<<"please enter integer value to delete it\n";
			cin>>value;
			if(BT.deleteValue(value))
				cout<<value<<" has been deleted successfully from Binary Tree\n";
			else
				cout<<value<<" is not exist in Binary Search Tree\n";
		}
		else if( choice == 3){
			cout<<"please enter integer value to search for it\n";
			cin>>value;
			if(BT.search(value))
				cout<<value<<" is exist in Binary Tree\n";
			else
				cout<<value<<" is not exist in Binary Tree\n";
		}
		else if( choice == 4){
			if(BT.isEmpty())
				cout<<"Binary Tree is Empty\n";
			else
				cout<<"Binary Tree is not Empty\n";
		}
		else if( choice == 5)
			cout<<"Binary Tree has "<<BT.size()<<" Node(s)\n";
		else if( choice == 6)
			cout<<"Height of Binary Tree = "<<BT.height()<<"\n";
		else if( choice == 7){
			cout<<"Binary Tree inOrder";
			BT.inOrder();
		}
		else if( choice == 8){
			cout<<"Binary Tree preOrder";
			BT.preOrder();
		}
		else if( choice == 9){
			cout<<"Binary Tree postOrder";
			BT.postOrder();
		}
		else if( choice == 10){
			cout<<"Binary Tree by level";
			BT.levelOrder();
		}
		else if( choice == 11)
			break;
		else
			cout<<"\a\a\a\a\aInvalid choice, please choice [1-11]\n";
	}while(true);
}

void binarySearchTreeMenu(BinartSearchTree &BST){
	int choice;
	int value;
	do{
		system("pause");
		system("cls");
		cout<<"1- insert Value\n";
		cout<<"2- delete value\n";
		cout<<"3- search for value\n";
		cout<<"4- is Tree Empty\n";
		cout<<"5- number of nodes\n";
		cout<<"6- tree height\n";
		cout<<"7- print tree inOrder\n";
		cout<<"8- print tree preOrder\n";
		cout<<"9- print tree postOrder\n";
		cout<<"10- print tree level by level\n";
		cout<<"11- return\n";

		cin>>choice;
		if(choice == 1){
			cout<<"please enter integer value to insert it\n";
			cin>>value;
			if(BST.insert(value))
				cout<<value<<" has been added successfully to Binary Search Tree\n";
			else
				cout<<value<<" is already exist in Binary Search Tree\n";
		}
		else if( choice == 2){
			cout<<"please enter integer value to delete it\n";
			cin>>value;
			if(BST.deleteValue(value))
				cout<<value<<" has been deleted successfully from Binary Search Tree\n";
			else
				cout<<value<<" is not exist in Binary Search Tree\n";
		}
		else if( choice == 3){
			cout<<"please enter integer value to search for it\n";
			cin>>value;
			if(BST.search(value))
				cout<<value<<" is exist in Binary Search Tree\n";
			else
				cout<<value<<" is not exist in Binary Search Tree\n";
		}
		else if( choice == 4){
			if(BST.isEmpty())
				cout<<"Binary Search Tree is Empty\n";
			else
				cout<<"Binary Search Tree is not Empty\n";
		}
		else if( choice == 5)
			cout<<"Binary Search Tree has "<<BST.size()<<" Node(s)\n";
		else if( choice == 6)
			cout<<"Height of Binary Search Tree = "<<BST.height()<<"\n";
		else if( choice == 7){
			cout<<"Binary Search Tree inOrder";
			BST.inOrder();
		}
		else if( choice == 8){
			cout<<"Binary Search Tree preOrder";
			BST.preOrder();
		}
		else if( choice == 9){
			cout<<"Binary Search Tree postOrder";
			BST.postOrder();
		}
		else if( choice == 10){
			cout<<"Binary Search Tree by level";
			BST.levelOrder();
		}
		else if( choice == 11)
			break;
		else
			cout<<"\a\a\a\a\aInvalid choice, please choice [1-11]\n";
	}while(true);
}