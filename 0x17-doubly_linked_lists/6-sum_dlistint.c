#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - find sum of elements in the list
 * @head: head of linked list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *present;
dlistint_t *foll;
int sum = 0;

present = head;

while (present != NULL)
{
foll = present->next;
sum += present->n;
present = foll;
}
return (sum);
}
