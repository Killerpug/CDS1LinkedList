//
// Created by A01229895 on 28/05/2019.
//

#include <malloc.h>
#include "Linked_List.h"
#include <stdio.h>
Node *head = NULL;

Node* create_node(int d){
    Node *new_node = (Node*)malloc(sizeof(Node));   //cast to assure same pointer type
    new_node -> next_node = NULL;
    new_node -> data = d;

    return new_node;
}
Node* add_node(Node *node){      //Adds a node to the list
    if(head == NULL){            //empty list
        head = (Node*)malloc(sizeof(Node));
        head = node;
    } else {                    //Add node to head
       Node *temp = head;
       head = node;
       node -> next_node = temp;
    }
    return node;
}
void remove_node(Node *node){
    if(node == head) {              //case node is the head
        head = head->next_node;
        free(node);
        return;
    }
    Node* search = head;
    Node * previous = NULL;
    while ( search != node && (search -> next_node) != NULL){       //iterate to find node
        previous = search;
        search = search -> next_node;
    }
    if (node == search) {           //match found
        previous -> next_node = search -> next_node;
        printf("You have erased: %i", search->data);
        free(search);
    }
    else printf("node not found");
}

Node* add_new(int d){
    Node *new_node = create_node(d);
    return add_node(new_node);
}

