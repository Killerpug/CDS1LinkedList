//
// Created by A01229895 on 28/05/2019.
//

#include <malloc.h>
#include "Linked_List.h"
#include <stdio.h>
List* create_list(){
    List *new_list = (List*)malloc(sizeof(List));       //reserve enough space for List structure
    new_list -> head = NULL;
    new_list -> size = 0;
    return new_list;
}
void delete_list(List *list){
    free(list);
    printf("deleted \n");
}
Node* create_node(T item){
    Node *new_node = (Node*)malloc(sizeof(Node));   //cast to assure same pointer type
    new_node -> next_node = NULL;
    new_node -> data = item;
    return new_node;
}
Node* add_node(Node *node, List *list){                  //Adds a node to the list
    list -> size++;
    if(list -> head == NULL){                               //if empty list, node is head
        list -> head = (Node*)malloc(sizeof(Node));
        list -> head = node;
    } else {                                              //Add node, new head
       Node *temp = list -> head;
       list -> head = node;
       list->head->next_node = temp;
    }
    return node;
}

void remove_node(T item, List *list, erase type_of_deletion){
    if(item == list -> head -> data) {                                   //case node is the head
        list -> size--;
        Node *remove = list -> head;
        list -> head = list -> head->next_node;                         //change head
        printf("You have erased: %i \n", remove -> data);
        free(remove);
        return;
    }
    Node *search = list -> head;
    Node *previous = NULL;
    while ( search -> data != item && (search -> next_node) != NULL){       //iterate to find node to erase while list have isnt empty
        previous = search;
        search = search -> next_node;
    }
    if(search->data == item){                                           //match found, erase node
        list -> size--;
        previous -> next_node = search -> next_node;
        printf("You have erased: %i \n", search -> data);
        free(search);
        if(type_of_deletion)        //deletes all the coincidences
            remove_node(item, list, ALL);
    }
    else printf("No more nodes found\n");
}
Node* search_node(T item, List *list){                       //returns node with item if found or NULL if not found
    Node* search = list -> head;
    while ( search -> data != item && (search -> next_node) != NULL){       //iterate to find node to erase
        search = search -> next_node;
    }
    if( search->data == item) return search;
    else return NULL;
}

Node* add_new( T item, List *list){                  //create and add a node to a list
    Node *new_node = create_node(item);              //create
    return add_node(new_node, list);                 //add
}

