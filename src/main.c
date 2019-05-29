#include <stdio.h>
#include "Linked_List.h"
int main() {
    List* list1 = create_list();
    List* list2 = create_list();

    Node* node1 = add_new(2, list1);
    Node* node2 = add_new(4, list2);
    Node* node3 = add_new(6, list2);

    remove_node(node2, list2);
    remove_node(node3, list2);
    remove_node(node1, list1);

    delete_list(list1);
    delete_list(list2);
    return 0;

}