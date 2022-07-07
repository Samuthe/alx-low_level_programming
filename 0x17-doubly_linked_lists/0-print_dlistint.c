#include <stdio.h>
#include "lists.h"

/**
* struct dlistint_s - doubly linked list
* @n: integer
* @prev: points to the previous node
* @next: points to the next node
*
* Description: doubly linked list node structure
*
*/
size_t print_dlistint(const dlistint_t *h){

int x;
for(x = 0; h != NULL; x++){
printf("%i\n", h->n);
h = h->next;
}
return (x);
}
