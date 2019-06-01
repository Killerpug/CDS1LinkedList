# CDS1LinkedList
First Data Structure on C, a Linked List with dynamic memory (based on pointers).
Methods:
Node* create_node (T item);                 //creates a new node with data, ref to next node, returns the pointer to mem loc.
Node* add_node (Node *node, List *list);
Node* add_new_node (T item, List *list);
void remove_node (T item, List *list, Erase type_of_deletion);
Node* search_node (T item, List *list);
bool compare_items (T item1, T item2);
List* create_list ();                      //create the List that stores nodes
void delete_list (List *list);
void reverse_list (List *list);
void print_list (List *list);
void private_remove_adjust (Node *remove, List *list, Erase type);       //adjust size, memory space, recurrent deletion (for internal use)
