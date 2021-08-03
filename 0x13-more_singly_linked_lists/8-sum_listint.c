#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - A stringlist funtion to print a list.
 * @head: Argument variable of the function.
 * Return: Amount of nodes counted
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ptr = head;
if (ptr == NULL)
{
return (0);
}
while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
