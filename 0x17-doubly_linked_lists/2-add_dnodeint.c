#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_dnodeint - adds a node to the beginning of a double linked list
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
new_node->next = *head;
*head = new_node;

return (*head);
}
