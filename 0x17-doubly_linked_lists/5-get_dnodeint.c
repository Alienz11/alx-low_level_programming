#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of linked list
 * @index: node index to return
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *present;

if (head == NULL)
return (0);

present = head;

while (index != 0)
{
present = present->next;
index--;
if (present == NULL)
return (0);
}

return (present);
}
