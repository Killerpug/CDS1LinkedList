//
// Created by A01229895 on 28/05/2019.
//

#include <malloc.h>
#include "Linked_List.h"
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

