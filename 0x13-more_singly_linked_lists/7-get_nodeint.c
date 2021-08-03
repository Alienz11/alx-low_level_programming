#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Frees a linked list
 * @head: The node at the Beginning
 * @index: The node at the Beginning
 * Return: temp to show (Success)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *ptr = head;

for (i = 0; ptr && i <= index; i++)
{
if (i == index)
return (ptr);
ptr = ptr->next;
}
return (NULL);
}
