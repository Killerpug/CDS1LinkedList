#include <stdio.h>
#include "Linked_List.h"
int main() {

    List* list1 = create_list();
    List* list2 = create_list();

    add_new_node(2, list1);
    add_new_node(1, list2);
    add_new_node(2, list2);
    add_new_node(3, list2);
    add_new_node(4, list2);
    add_new_node(5, list2);
    add_new_node(6, list2);
    add_new_node(7, list2);
    add_new_node(8, list2);
    add_new_node(9, list2);

    print_list(list2);
    reverse_list(list2);
    print_list(list2);
    remove_node(6, list2, ALL);
    remove_node(2, list1, FIRST);

    delete_list(list1);
    delete_list(list2);
    return 0;

}