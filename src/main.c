#include <stdio.h>
#include "Linked_List.h"
int main() {
    printf("Hello, World!\n");
    Node* node1 = create_node(2);
    add_node(node1);
    Node* node2 = create_node(4);
    add_node(node2);
    Node* node3 = create_node(6);
    add_node(node3);

    Node* node4 = add_new(7);    
    return 0;
}