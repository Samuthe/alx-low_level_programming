#include "lists.h"

size_t
listint_len(const listint_t *h)
{
unsigned int i = 0;
const listint_t *new_node = h;
for (; new_node; new_node = new_node->next)
i++;
return (i);
}
