//
//  menue.h
//  project_Data
//
//  Created by ahmed radwan on 11/01/2021.
//

#ifndef menue_h
#define menue_h
#include "Assignments.h"
#include "Queue.h"
#include "Tree.h"
#include "linked list.h"


void Full_Menue(){
    stack_array<int> obj_stack;
    stack_Dynamic<float> obj_Dynamic_stack(10);
    stack_liked_list<int> obj_Stack_linked;
    queue_array<int> obj_Queue_Array;
    queue_linked_list<int> obj_Queue_linked_list;
    queue_circular_array<int> obj_Circular_Queue_Array;
    queue_circular_linked_list<int>obj_Circular_Queue_linked_list;
    linked_list<int> obj_linked;
    linked_list_double<int> obj_double_linked;
    linked_list_circular<int> obj_circular_linked;
    linked_list_double_circular<int> obj_double_circular_linked;
    linked_list_ASS<int> obj_ASSignment1;
    post_fix_evaluate<float> obj_evalu(20);
    poly obj_poly,obj_poly2,obj_poly3;
    queue_using_stack<float> obj_queue(20);
    BinartTree<int> BT_obj;
    BinartSearchTree<int> BST_obj;

int choose,S,num,val;
char ch;
menue:
cout<<"1-Stack\n";
cout<<"2-Queue\n";
cout<<"3-Linked-list\n";
cout<<"4-TRee\n";
cout<<"5-Assignment\n";
cout<<"6-Exit\n";
cout<<"please, enter your choice : ";
cin>>choose;
system("cls");
switch (choose) {
    case 1:
        stack:
        cout<<"a-Stack-Array\n";
        cout<<"b-Stack-Dynamic-Array\n";
        cout<<"c-Stack-Linked-list\n";
        cout<<"d-return\n";
        cout<<"please, enter your choice : ";
        cin>>ch;
        system("cls");
        switch (ch) {
         case 'a':
             S_operation:
             cout<<"1-push\n";
             cout<<"2-pop\n";
             cout<<"3-peak\n";
             cout<<"4-number of element\n";
            cout<<"5-Display\n";
            cout<<"6-retern\n";
             cout<<"please, enter your choice : ";
             cin>>S;
             system("cls");
                switch (S) {
                 case 1:
                     cout<<"Enter the element you want to push : ";
                     cin>>num;
                     obj_stack.push(num);
                     cout<<"pushed successed\n";
                     goto S_operation;
                     break;
                 case 2:
                     obj_stack.pop();
                     cout<<"poped successed\n";
                     goto S_operation;
                     break;
                 case 3:
                     cout<<obj_stack.peak()<<endl;
                    goto S_operation;
                     break;
                 case 4:
                     cout<<"number of element = "<<obj_stack.number_of_element()<<endl;
                     goto S_operation;
                     break;
                    case 5:
                        obj_stack.Display();
                        goto S_operation;
                 case 6:
                  goto stack;
                     break;
                 default:
                     break;
                }
             break;
         case 'b':
                S_operation2:
            cout<<"1-push\n";
            cout<<"2-pop\n";
            cout<<"3-peak\n";
            cout<<"4-number of element\n";
            cout<<"5-Display\n";
            cout<<"6-retern\n";
            cout<<"please, enter your choice : ";
            cin>>S;
            system("cls");
               switch (S) {
                case 1:
                    cout<<"Enter the element you want to push : ";
                    cin>>num;
                       obj_Dynamic_stack.push(num);
                    cout<<"pushed successed\n";
                    goto S_operation2;
                    break;
                case 2:
                       obj_Dynamic_stack.pop();
                    cout<<"poped successed\n";
                    goto S_operation2;
                    break;
                case 3:
                    cout<<obj_Dynamic_stack.peak()<<endl;
                   goto S_operation2;
                    break;
                case 4:
                    cout<<"number of element = "<<obj_Dynamic_stack.number_of_element()<<endl;
                    goto S_operation2;
                    break;
                case 5:
                       obj_Dynamic_stack.display();
                       goto S_operation2;
                       break;
                case 6:
                 goto stack;
                    break;
                default:
                    break;
               }
            break;
            case 'c':
            S_operation3:
                cout<<"1-push\n";
                cout<<"2-pop\n";
                cout<<"3-peak\n";
                cout<<"4-Display\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                system("cls");
                   switch (S) {
                    case 1:
                        cout<<"Enter the element you want to push : ";
                        cin>>num;
                           obj_Stack_linked.push(num);
                        cout<<"pushed successed\n";
                        goto S_operation3;
                        break;
                    case 2:
                           obj_Stack_linked.pop();
                        cout<<"poped successed\n";
                        goto S_operation3;
                        break;
                    case 3:
                        cout<<obj_Stack_linked.peak()<<endl;
                       goto S_operation3;
                        break;
                       case 4:
                           obj_Stack_linked.dispaly_stack();
                           goto S_operation3;
                            break;
                       default:
                           break;
                   }
             break;
            case 'd':
                goto menue;
         default:
             break;
        }
        break;
    case 2:
    queue:
    cout<<"a-Queue-Array\n";
    cout<<"b-Queue_linked_list\n";
    cout<<"c-Queue_circular_array\n";
    cout<<"d-Queue_circular_linked_list\n";
    cout<<"e-return\n";
    cout<<"please, enter your choice : ";
    cin>>ch;
    system("cls");
    switch (ch) {
     case 'a':
         Q_operation:
         cout<<"1-enqueue\n";
         cout<<"2-dequeue\n";
         cout<<"3-number of element\n";
        cout<<"4-Display\n";
        cout<<"5-retern\n";
         cout<<"please, enter your choice : ";
         cin>>S;
         system("cls");
            switch (S) {
             case 1:
                 cout<<"Enter the element you want to enqueue : ";
                 cin>>num;
                    obj_Queue_Array.enqueue(num);
                 cout<<"pushed successed\n";
                 goto Q_operation;
                 break;
             case 2:
                    cout<<obj_Queue_Array.dequeue()<<endl;
                 cout<<"poped successed\n";
                 goto Q_operation;
                 break;
             case 3:
                 cout<<"number of element = "<<obj_Queue_Array.number_of_element()<<endl;
                 goto Q_operation;
                 break;
             case 4:
                    obj_Queue_Array.display();
                    goto Q_operation;
                    break;
             case 5:
              goto queue;
                 break;
             default:
                 break;
            }
        break;
        case 'b':
            Q_operation2:
            cout<<"1-enqueue\n";
            cout<<"2-dequeue\n";
            cout<<"3-number of element\n";
           cout<<"4-Display\n";
           cout<<"5-retern\n";
            cout<<"please, enter your choice : ";
            cin>>S;
            system("cls");
               switch (S) {
                case 1:
                    cout<<"Enter the element you want to enqueue : ";
                    cin>>num;
                       obj_Queue_linked_list.enqueue(num);
                    cout<<"pushed successed\n";
                    goto Q_operation2;
                    break;
                case 2:
                       obj_Queue_linked_list.dequeue();
                    cout<<"poped successed\n";
                    goto Q_operation2;
                    break;
                case 3:
                    cout<<"number of element = "<<obj_Queue_linked_list.number_of_element()<<endl;
                    goto Q_operation2;
                    break;
                case 4:
                       obj_Queue_linked_list.display();
                       goto Q_operation2;
                       break;
                case 5:
                 goto queue;
                    break;
                default:
                    break;
               }
           break;
        case 'c':
            Q_operation3:
            cout<<"1-enqueue\n";
            cout<<"2-dequeue\n";
            cout<<"3-number of element\n";
           cout<<"4-Display\n";
           cout<<"5-retern\n";
            cout<<"please, enter your choice : ";
            cin>>S;
            system("cls");
               switch (S) {
                case 1:
                    cout<<"Enter the element you want to enqueue : ";
                    cin>>num;
                       obj_Circular_Queue_Array.enqueue(num);
                    cout<<"pushed successed\n";
                    goto Q_operation3;
                    break;
                case 2:
                       cout<<obj_Circular_Queue_Array.dequeue()<<endl;
                    cout<<"poped successed\n";
                    goto Q_operation3;
                    break;
                case 3:
                    cout<<"number of element = "<<obj_Circular_Queue_Array.number_of_element()<<endl;
                    goto Q_operation3;
                    break;
                case 4:
                       obj_Circular_Queue_Array.display();
                       goto Q_operation3;
                       break;
                case 5:
                 goto queue;
                    break;
                default:
                    break;
               }
           break;
        case 'd':
            Q_operation4:
            cout<<"1-enqueue\n";
            cout<<"2-dequeue\n";
            cout<<"3-number of element\n";
           cout<<"4-Display\n";
           cout<<"5-retern\n";
            cout<<"please, enter your choice : ";
            cin>>S;
            system("cls");
               switch (S) {
                case 1:
                    cout<<"Enter the element you want to enqueue : ";
                    cin>>num;
                       obj_Circular_Queue_linked_list.enqueue(num);
                    cout<<"enqueue successed\n";
                    goto Q_operation4;
                    break;
                case 2:
                       obj_Circular_Queue_linked_list.dequeue();
                    cout<<"dequeue successed\n";
                    goto Q_operation4;
                    break;
                case 3:
                    cout<<"number of element = "<<obj_Circular_Queue_linked_list.number_of_element()<<endl;
                    goto Q_operation4;
                    break;
                case 4:
                       obj_Circular_Queue_linked_list.display();
                       goto Q_operation4;
                       break;
                case 5:
                 goto queue;
                    break;
                default:
                    break;
               }
           break;
        case 'e':
            goto menue;
            break;
        default:
            break;
    }
        break;
    case 3:
        linked:
        cout<<"a-linked list\n";
        cout<<"b-Double linked list\n";
        cout<<"c-Circular linked list\n";
       cout<<"d-Double circular linked list\n";
       cout<<"e-retern\n";
        cout<<"please, enter your choice : ";
        cin>>ch;
        system("cls");
        switch (ch) {
         case 'a':
    L_operation:
        cout<<"1-insert_first\n";
        cout<<"2-deletion_first\n";
        cout<<"3-insert_last\n";
       cout<<"4-deletion_last\n";
       cout<<"5-isert_after_value\n";
        cout<<"6-deletion_at_position\n";
        cout<<"7-number of element\n";
        cout<<"8-display\n";
        cout<<"9-return\n";
        cout<<"please, enter your choice : ";
        cin>>S;
        system("cls");
                switch (S) {
                    case 1:
                    cout<<"Enter the element you want to insert_first : ";
                    cin>>num;
                    obj_linked.insert_first(num);
                    cout<<"insert successed\n";
                    goto L_operation;
                        break;
                    case 2:
                        obj_linked.deletion_first();
                        cout<<"deletion successed\n";
                        goto L_operation;
                        break;
                    case 3:
                        cout<<"Enter the element you want to insert_first : ";
                        cin>>num;
                        obj_linked.insert_last(num);
                        cout<<"insert successed\n";
                        goto L_operation;
                        break;
                    case 4:
                        obj_linked.deletion_last();
                        cout<<"deletion successed\n";
                        goto L_operation;
                        break;
                    case 5:
                        cout<<"Enter the element you want to insert :";
                        cin>>num;
                        cout<<"Enter the value : ";
                        cin>>val;
                        obj_linked.isert_after_value(val, num);
                        cout<<"insertion successed\n";
                        goto L_operation;
                        break;
                    case 6:
                        cout<<"Enter the position you want to deletion : ";
                        cin>>num;
                        obj_linked.deletion_at_position(num);
                        cout<<"deletion successed\n";
                        goto L_operation;
                        break;
                    case 7:
                        cout<<"number of element = "<<obj_linked.number_of_element();
                        goto L_operation;
                        break;
                    case 8:
                        obj_linked.display();
                        goto L_operation;
                        break;
                    case 9:
                        goto linked;
                        break;
                    default:
                        break;
                }
            break;
            case 'b':
            L_operation2:
                cout<<"1-insert_first\n";
                cout<<"2-deletion_first\n";
                cout<<"3-insert_last\n";
               cout<<"4-deletion_last\n";
               cout<<"5-isert_after_value\n";
                cout<<"6-deletion_at_position\n";
                cout<<"7-number of element\n";
                cout<<"8-display from start\n";
                cout<<"9-display from end\n";
                cout<<"10-return\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                system("cls");
                        switch (S) {
                            case 1:
                            cout<<"Enter the element you want to insert_first : ";
                            cin>>num;
                                obj_double_linked.insert_first(num);
                            cout<<"insert successed\n";
                            goto L_operation2;
                                break;
                            case 2:
                                obj_double_linked.deletion_first();
                                cout<<"deletion successed\n";
                                goto L_operation2;
                                break;
                            case 3:
                                cout<<"Enter the element you want to insert_first : ";
                                cin>>num;
                                obj_double_linked.insert_last(num);
                                cout<<"insert successed\n";
                                goto L_operation2;
                                break;
                            case 4:
                                obj_double_linked.deletion_last();
                                cout<<"deletion successed\n";
                                goto L_operation2;
                                break;
                            case 5:
                                cout<<"Enter the element you want to insert :";
                                cin>>num;
                                cout<<"Enter the position : ";
                                cin>>val;
                                obj_double_linked.isert_at_position(val, num);
                                cout<<"insertion successed\n";
                                goto L_operation2;
                                break;
                            case 6:
                                cout<<"Enter the position you want to deletion : ";
                                cin>>num;
                                obj_double_linked.deletion_at_position(num);
                                cout<<"deletion successed\n";
                                goto L_operation2;
                                break;
                            case 7:
                                cout<<"number of element = "<<obj_double_linked.number_of_element();
                                goto L_operation2;
                                break;
                            case 8:
                                obj_double_linked.display_from_start();
                                goto L_operation2;
                                break;
                            case 9:
                                obj_double_linked.display_from_end();
                                goto L_operation2;
                                break;
                            case 10:
                                goto linked;
                            default:
                                break;
                        }
                    break;
            case 'c':
            L_operation3:
                cout<<"1-insert_first\n";
                cout<<"2-deletion_first\n";
                cout<<"3-insert_last\n";
               cout<<"4-deletion_last\n";
               cout<<"5-isert_at_position\n";
                cout<<"6-deletion_at_position\n";
                cout<<"7-number of element\n";
                cout<<"8-display\n";
                cout<<"9-return\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                system("cls");
                        switch (S) {
                            case 1:
                            cout<<"Enter the element you want to insert_first : ";
                            cin>>num;
                                obj_circular_linked.insert_first(num);
                            cout<<"insert successed\n";
                            goto L_operation3;
                                break;
                            case 2:
                                obj_circular_linked.deletion_first();
                                cout<<"deletion successed\n";
                                goto L_operation3;
                                break;
                            case 3:
                                cout<<"Enter the element you want to insert_first : ";
                                cin>>num;
                                obj_circular_linked.insert_last(num);
                                cout<<"insert successed\n";
                                goto L_operation3;
                                break;
                            case 4:
                                obj_circular_linked.deletion_last();
                                cout<<"deletion successed\n";
                                goto L_operation3;
                                break;
                            case 5:
                                cout<<"Enter the element you want to insert :";
                                cin>>num;
                                cout<<"Enter the position : ";
                                cin>>val;
                                obj_circular_linked.isert_at_position(val, num);
                                cout<<"insertion successed\n";
                                goto L_operation3;
                                break;
                            case 6:
                                cout<<"Enter the position you want to deletion : ";
                                cin>>num;
                                obj_circular_linked.deletion_at_position(num);
                                cout<<"deletion successed\n";
                                goto L_operation3;
                                break;
                            case 7:
                                cout<<"number of element = "<<obj_circular_linked.number_of_element();
                                goto L_operation3;
                                break;
                            case 8:
                                obj_linked.display();
                                goto L_operation3;
                                break;
                            case 9:
                                goto linked;
                                break;
                            default:
                                break;
                        }
                break;
            case 'd':
            L_operation4:
                cout<<"1-insert_first\n";
                cout<<"2-deletion_first\n";
                cout<<"3-insert_last\n";
               cout<<"4-deletion_last\n";
               cout<<"5-isert_after_value\n";
                cout<<"6-deletion_at_position\n";
                cout<<"7-number of element\n";
                cout<<"8-display from start\n";
                cout<<"9-display from end\n";
                cout<<"10-return\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                system("cls");
                        switch (S) {
                            case 1:
                            cout<<"Enter the element you want to insert_first : ";
                            cin>>num;
                                obj_double_circular_linked.insert_first(num);
                            cout<<"insert successed\n";
                            goto L_operation4;
                                break;
                            case 2:
                                obj_double_circular_linked.deletion_first();
                                cout<<"deletion successed\n";
                                goto L_operation4;
                                break;
                            case 3:
                                cout<<"Enter the element you want to insert_first : ";
                                cin>>num;
                                obj_double_circular_linked.insert_last(num);
                                cout<<"insert successed\n";
                                goto L_operation4;
                                break;
                            case 4:
                                obj_double_circular_linked.deletion_last();
                                cout<<"deletion successed\n";
                                goto L_operation4;
                                break;
                            case 5:
                                cout<<"Enter the element you want to insert :";
                                cin>>num;
                                cout<<"Enter the position : ";
                                cin>>val;
                                obj_double_circular_linked.isert_at_position(val, num);
                                cout<<"insertion successed\n";
                                goto L_operation4;
                                break;
                            case 6:
                                cout<<"Enter the position you want to deletion : ";
                                cin>>num;
                                obj_double_circular_linked.deletion_at_position(num);
                                cout<<"deletion successed\n";
                                goto L_operation4;
                                break;
                            case 7:
                                cout<<"number of element = "<<obj_double_circular_linked.number_of_element();
                                goto L_operation4;
                                break;
                            case 8:
                                obj_double_circular_linked.display_from_start();
                                goto L_operation4;
                                break;
                            case 9:
                                obj_double_circular_linked.display_from_end();
                                goto L_operation4;
                                break;
                            case 10:
                                goto linked;
                            default:
                                break;
                        }
                    break;
            case 'e':
                goto menue;
                break;
            default:
                break;
        }
        break;
    case 4:
        binaryTree:
        cout<<"a-Binary tree\n";
        cout<<"b-Binary search tree\n";
        cout<<"c-return\n";
        cout<<"please, enter your choice : ";
        cin>>ch;
        switch (ch) {
            case 'a':
                BT_operation:
                cout<<"1- insertion \n";
                cout<<"2- deletion \n";
                cout<<"3- search for value\n";
                cout<<"4- Is Empty\n";
                cout<<"5- number of nodes\n";
                cout<<"6- tree height\n";
                cout<<"7- print tree by depth\n";
                cout<<"8- print tree by breadth\n";
                cout<<"9- return\n";
                cout<<"Enter your choice : ";
                cin>>S;
                system("cls");
                switch (S) {
                    case 1:
                        cout<<"enter the value you want to insert : ";
                        cin>>num;
                        BT_obj.insert(num);
                        cout<<"inserted succesed\n";
                        goto BT_operation;
                        break;
                    case 2:
                        cout<<"enter the value you want to delete : ";
                        cin>>num;
                        if(BT_obj.deleteValue(num))
                            cout<<" has been deleted successfully from Binary Tree\n";
                        else
                            cout<<"this value is not exist in Binary  Tree\n";
                        goto BT_operation;
                        break;
                    case 3:
                        cout<<"please enter integer value to search for it\n";
                        cin>>num;
                        if(BT_obj.search(num))
                            cout<<num<<" is exist in Binary Tree\n";
                        else
                            cout<<"this value is not exist in Binary Tree\n";
                        goto BT_operation;
                        break;
                    case 4:
                        if(BT_obj.isEmpty())
                            cout<<"Binary Tree is Empty\n";
                        else
                            cout<<"Binary Tree is not Empty\n";
                        goto BT_operation;
                        break;
                    case 5:
                        cout<<"Binary Tree has "<<BT_obj.size()<<" Node(s)\n";
                        goto BT_operation;
                        break;
                    case 6:
                        cout<<"Height of Binary Tree = "<<BT_obj.height()<<"\n";
                        goto BT_operation;
                        break;
                    case 7:
                        cout<<"a- inOrder\n";
                        cout<<"b- preOrder\n";
                        cout<<"c- postOrder\n";
                        cout<<"enter your choice : ";
                        cin>>ch;
                        system("cls");
                        switch (ch) {
                            case 'a':
                                BT_obj.inOrder();
                                goto BT_operation;
                                break;
                            case 'b':
                                BT_obj.preOrder();
                                goto BT_operation;
                                break;
                            case 'c':
                                BT_obj.postOrder();
                                goto BT_operation;
                                break;
                            default:
                                break;
                        }
                        break;
                    case 8:
                        BT_obj.levelOrder();
                        goto BT_operation;
                        break;
                    case 9:
                        goto binaryTree;
                    default:
                        break;
                }
                break;
            case 'b':
                BT_operation2:
                cout<<"1- insertion \n";
                cout<<"2- deletion \n";
                cout<<"3- search for value\n";
                cout<<"4- Is Empty\n";
                cout<<"5- number of nodes\n";
                cout<<"6- tree height\n";
                cout<<"7- print tree by depth\n";
                cout<<"8- print tree by breadth\n";
                cout<<"9- return\n";
                cout<<"Enter your choice : ";
                cin>>S;
                system("cls");
                switch (S) {
                    case 1:
                        cout<<"enter the value you want to insert : ";
                        cin>>num;
                        BST_obj.insert(num);
                        cout<<"inserted succesed\n";
                        goto BT_operation2;
                        break;
                    case 2:
                        cout<<"enter the value you want to delete : ";
                        cin>>num;
                        if(BST_obj.deleteValue(num))
                            cout<<" has been deleted successfully from Binary Tree\n";
                        else
                            cout<<"this value is not exist in Binary  Tree\n";
                        goto BT_operation2;
                        break;
                    case 3:
                        cout<<"please enter integer value to search for it\n";
                        cin>>num;
                        if(BST_obj.search(num))
                            cout<<num<<" is exist in Binary Tree\n";
                        else
                            cout<<"this value is not exist in Binary Tree\n";
                        goto BT_operation2;
                        break;
                    case 4:
                        if(BST_obj.isEmpty())
                            cout<<"Binary Tree is Empty\n";
                        else
                            cout<<"Binary Tree is not Empty\n";
                        goto BT_operation2;
                        break;
                    case 5:
                        cout<<"Binary Tree has "<<BST_obj.size()<<" Node(s)\n";
                        goto BT_operation2;
                        break;
                    case 6:
                        cout<<"Height of Binary Tree = "<<BST_obj.height()<<"\n";
                        goto BT_operation2;
                        break;
                    case 7:
                        cout<<"a- inOrder\n";
                        cout<<"b- preOrder\n";
                        cout<<"c- postOrder\n";
                        cout<<"enter your choice : ";
                        cin>>ch;
                        system("cls");
                        switch (ch) {
                            case 'a':
                                BST_obj.inOrder();
                                goto BT_operation2;
                                break;
                            case 'b':
                                BST_obj.preOrder();
                                goto BT_operation2;
                                break;
                            case 'c':
                                BST_obj.postOrder();
                                goto BT_operation2;
                                break;
                            default:
                                break;
                        }
                        break;
                    case 8:
                        BST_obj.levelOrder();
                        goto BT_operation2;
                        break;
                    case 9:
                        goto binaryTree;
                        break;
                    default:
                        break;
                }
                break;
            case 'c':
                goto menue;
                break;
            default:
                break;
        }
        break;
    case 5:
    Assignment:
    cout<<"a-Linked one function\n";
    cout<<"b-post_fix_evaluate\n";
    cout<<"c-polynomial\n";
    cout<<"d-queue_using_stack\n";
    cout<<"e-return\n";
    cout<<"please, enter your choice : ";
    cin>>ch;
    system("cls");
        switch (ch) {
            case 'a':
                AS_operation:
                cout<<"1-Creat_or_insert\n";
                cout<<"2-number of element\n";
                cout<<"3-Display\n";
                cout<<"4-retern\n";
                cout<<"Enter your choice : ";
                cin>>S;
                switch (S) {
                    case 1:
                        cout<<"enter the value you want to insert : ";
                        cin>>num;
                        obj_ASSignment1.Creat_or_insert(num);
                        cout<<"inserted succesed\n";
                        goto AS_operation;
                        break;
                    case 2:
                        cout<<"the number of elementd = "<<obj_ASSignment1.number_of_element();
                        goto AS_operation;
                        break;
                    case 3:
                        obj_ASSignment1.display();
                        goto AS_operation;
                        break;
                    case 4:
                        goto Assignment;
                        break;
                    default:
                        break;
                }
                break;
            case 'b':
                cout<<process(get_string())<<endl;
                goto Assignment;
                break;
            case 'c':
                equ(get_str(), obj_poly);
                
                equ(get_str(), obj_poly2);
                
                obj_poly3.set_node(obj_poly3.add(obj_poly, obj_poly2));
                
                result(obj_poly.get_node(), obj_poly2.get_node(), obj_poly3.get_node());
                goto Assignment;
                break;
            case 'd':
                AS_operation2:
                cout<<"1-enqueue\n";
                cout<<"2-dequeue\n";
                cout<<"3-number of element\n";
               cout<<"4-Display\n";
               cout<<"5-retern\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                switch (S) {
                    case 1:
                        cout<<"enter the value you want to enqueue : ";
                        cin>>num;
                        obj_queue.enqueue(num);
                        cout<<"enqueued successed\n";
                        goto AS_operation2;
                        break;
                    case 2:
                        obj_queue.deque();
                        cout<<"dequeued successed\n";
                        goto AS_operation2;
                        break;
                    case 3:
                        cout<<"number of element = "<<obj_queue.number_of_element()<<endl;
                        goto AS_operation2;
                        break;
                    case 4:
                        obj_queue.display();
                        goto AS_operation2;
                        break;
                    case 5:
                        goto Assignment;
                        break;
                    default:
                        break;
                }
                break;
            case 'e':
                goto menue;
                break;
            default:
                break;
        }
        break;
    case 6:
        exit(0);
        break;
    default:
        break;
}
}


#endif /* menue_h */
