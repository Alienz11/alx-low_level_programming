#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - dlistint_len - counts elements of doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t num_elem = 0;
const dlistint_t *current = h;

while (current != NULL)
{
current = current->next;
num_elem++;
}
return (num_elem);
}
