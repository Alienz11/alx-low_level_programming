#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - A stringlist funtion to print a list.
 * @head: Argument variable of the function.
 * @n: Argument variable of the function.
 * Return: Amount of nodes counted
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;

if (head)
{
ptr = malloc(sizeof(listint_t));
if (ptr)
{
ptr->n = n;
ptr->next = *head;
*head = ptr;
}
}
return (ptr);
}
