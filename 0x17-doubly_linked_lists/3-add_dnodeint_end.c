#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_dnodeint_end - adds a node to the end of a double linked list
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *tp;

tp = *head;
while (tp && tp->next != NULL)
{
tp = tp->next;
}

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
new_node->prev = tp;

if (tp)
{
tp->next = new_node;
}
else
{
*head = new_node;
}
return (new_node);
}
