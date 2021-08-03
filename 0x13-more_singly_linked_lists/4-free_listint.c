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
if (head)
{
if (head->next)
free_listint(head->next);
if (head)
free(head);
}
}
