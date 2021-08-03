#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Frees a linked list
 * @head: The node at the Beginning
 * Return: temp to show (Success)
 */

int pop_listint(listint_t **head)
{
listint_t *ptr;
int temp;

if (*head == NULL)
return (0);
else
{
ptr = *head;
temp = ptr->n;
*head = ptr->next;
free(ptr);
}
return (temp);
}
