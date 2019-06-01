#include <stdio.h>
#include "Linked_List.h"
int main() {

    List* list1 = create_list();
    List* list2 = create_list();
    List* list3 = create_list();
    List* list4 = create_list();
    add_new_node(2, list4);
    add_new_node(2, list4);
    add_new_node(2, list1);
    add_new_node(2, list1);
    add_new_node(3, list1);
    add_new_node(1, list2);
    add_new_node(2, list2);
    add_new_node(3, list2);
    add_new_node(4, list2);
    add_new_node(5, list2);

    print_list(list2);
    reverse_list(list2);
    print_list(list2);
    remove_node(2, list1, FIRST);

    delete_list(list1);
    delete_list(list2);
    delete_list(list3);
    delete_list(list4);

    return 0;
}