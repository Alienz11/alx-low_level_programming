#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specific index
 * @h: head of linked list
 * @idx: index of new node
 * @n: new node value
 * Return: inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *present;
dlistint_t *new_node;

if (h == NULL)
return (0);

present = *h;

while (idx != 0)
{
present = present->next;
idx--;
if (present == NULL)
return (NULL);
}
new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->n = n;
new_node->next = present;
new_node->prev = present->prev;
if (present->prev != NULL)
present->prev->next = new_node;

return (present);
}
