//
// Created by A01229895 on 28/05/2019.
//

#ifndef CDS1LINKEDLIST_LINKED_LIST_H
#define CDS1LINKEDLIST_LINKED_LIST_H


    typedef struct Node{
        int data;
        struct Node *next_node;
    }Node;

    Node* create_node(int n, Node* next_node);      //create a new node with data, ref to next node, returns the pointer to mem loc.

#endif //CDS1LINKEDLIST_LINKED_LIST_H
