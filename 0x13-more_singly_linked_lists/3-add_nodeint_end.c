#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - A stringlist funtion to print a list.
 * @head: Argument variable of the function.
 * @n: Argument variable of the function.
 * Return: Amount of nodes counted
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr;
listint_t *last;

last = head ? *head : NULL;
while (last && last->next != NULL)
last = last->next;

ptr = malloc(sizeof(listint_t));
if (ptr)
{
ptr->n = n;
ptr->next = NULL;

if (last)
last->next = ptr;
if (*head == NULL)
*head = ptr;
}
return (ptr);
}
