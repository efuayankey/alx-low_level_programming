C - MORE SINGLY LINKED LISTS


0-print_listint.c
-A function that prints all the elements of a listint_t list.

1-listint_len.c
-A function that returns the number of elements in a linked listint_t list.

2-add_nodeint.c
-A function that adds a new node at the beginning of a listint_t list.
Return: the address of the new element, or NULL if it failed

3-add_nodeint_end.c
-A function that adds a new node at the end of a listint_t list.
Return: the address of the new element, or NULL if it failed

4-free_listint.c
A function that frees a listint_t list.

5-free_listint2.c 
A function that frees a listint_t linked list.
 
6-pop_listint.c
-A function that deletes the head node of a listint_t linked list. 
If the linked list is empty - returns 0. Else - returns the head node's data (n).

7-get_nodeint.c
-A function that locates a given node of a listint_t linked list. 
If the node does not exist - returns NULL. Else- returns the located node. 


8-sum_listint.c
-A function that returns the sum of all the data (n) of a listint_t linked list. 
If the linked list is empty - returns 0. Else - returns the sum of all the data (n). 

9-insert_nodeint.c
A function that inserts a new node to a listint_t linked list at a given position. 
If it is not possible to add the new node at index idx, or the function fails - returns NULL. Otherwise - returns the address of the new node. 10. Delete at index

10-delete_nodeint.c
-A function that deletes the node at a given index of a listint_t linked list. 
If the function succeeds - returns 1. If the function fails - returns -1. 


100-reverse_listint.c
-A function that reverses a listint_t linked list using a maximum of one loop and two variables. Returns a pointer to the first node of the reversed list. 12. Print (safe version)

101-print_listint_safe.c
-A function that prints a listint_t linked list safely (ie. can free lists containing loops). 
Returns the number of nodes in the listint_t list. 13. Free (safe version)

102-free_listint_safe.c
-A function that frees a listint_t linked list safely (ie. can free lists containing loops). 
Returns the size of the list that was freed. Sets the head to NULL. 

103-find_loop.c
-A function that finds the loop contained in a listint_t linked list using a maximum of two variables. 
If no loop is found - returns NULL. Else - returns the address of the node where the loop starts.

