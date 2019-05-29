//
// Created by A01229895 on 28/05/2019.
//

#include <malloc.h>
#include "Linked_List.h"
#include <stdio.h>
List* create_list(){
    List *new_list = (List*)malloc(sizeof(List));       //reserve enough space for List structure
    new_list -> head = NULL;
    return new_list;
}
void delete_list(List *list){
    free(list);
    printf("deleted \n");
}
Node* create_node(int d){
    Node *new_node = (Node*)malloc(sizeof(Node));   //cast to assure same pointer type
    new_node -> next_node = NULL;
    new_node -> data = d;
    return new_node;
}
Node* add_node(Node *node, List *list){                  //Adds a node to the list
    if(list->head == NULL){                               //if empty list, node is head
        list->head = (Node*)malloc(sizeof(Node));
        list->head = node;
    } else {                                              //Add node, new head
       Node *temp = list->head;
       list -> head = node;
       node -> next_node = temp;
    }
    return node;
}
void remove_node(Node *node, List *list){
    if(node == list -> head) {                                   //case node is the head
        list -> head = list -> head->next_node;
        free(node);
        return;
    }
    Node* search = list -> head;
    Node * previous = NULL;
    while ( search != node && (search -> next_node) != NULL){       //iterate to find node to erase
        previous = search;
        search = search -> next_node;
    }
    if (node == search) {                                            //match found, erase node
        previous -> next_node = search -> next_node;
        printf("You have erased: %i \n", search->data);
        free(search);
    }
    else printf("node not found\n");
}

Node* add_new(int d, List *list){       //fast way to create and add a node to a list
    Node *new_node = create_node(d);
    return add_node(new_node,list );
}

