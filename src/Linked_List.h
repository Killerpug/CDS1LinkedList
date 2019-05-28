//
// Created by A01229895 on 28/05/2019.
//

#ifndef CDS1LINKEDLIST_LINKED_LIST_H
#define CDS1LINKEDLIST_LINKED_LIST_H

typedef int T;
    typedef struct Node{
        T data;
        struct Node *next_node;
    }Node;

    Node* create_node(int d);      //create a new node with data, ref to next node, returns the pointer to mem loc.
    Node* add_node(Node *node);
    Node* add_new(int d);

#endif //CDS1LINKEDLIST_LINKED_LIST_H
