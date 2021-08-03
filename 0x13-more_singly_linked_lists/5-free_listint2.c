#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: The node at the Beginning
 */

void free_listint(listint_t *head)
{
if (!head)
return;
if (head->next)
{
free_listint(head->next);
}
free(head);
}

/**
 * free_listint2 - Frees a linked list
 * @head: The node at the Beginning
 */

void free_listint2(listint_t **head)
{
if (!head)
return;
if (*head)
free_listint(*head);
*head = NULL;
}
