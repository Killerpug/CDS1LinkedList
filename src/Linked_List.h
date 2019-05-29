//
// Created by A01229895 on 28/05/2019.
//

#ifndef CDS1LINKEDLIST_LINKED_LIST_H
#define CDS1LINKEDLIST_LINKED_LIST_H
//to change type of data just change type of T
typedef int T;
    typedef struct Node{
        T data;
        struct Node *next_node;
    }Node;

    typedef struct List{
        struct Node *head;
    }List;

    Node* create_node(int d);                 //create a new node with data, ref to next node, returns the pointer to mem loc.
    Node* add_node(Node *node, List *list);
    Node* add_new(int d, List *list);
    void remove_node(Node *node, List *list);
    List* create_list();                      //create the List that stores nodes
    void delete_list(List *list);
#endif //CDS1LINKEDLIST_LINKED_LIST_H
