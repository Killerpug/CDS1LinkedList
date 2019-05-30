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
    char name[15];
    struct Node *head;
    int size;
}List;

typedef enum {
    FIRST, ALL
}erase;

Node* create_node(T item);                 //create a new node with data, ref to next node, returns the pointer to mem loc.
Node* add_node(Node *node, List *list);
Node* add_new(T item, List *list);
void remove_node(T item, List *list, erase type_of_deletion);
Node* search_node(T item, List *list);
List* create_list();                      //create the List that stores nodes
void delete_list(List *list);
#endif //CDS1LINKEDLIST_LINKED_LIST_H
