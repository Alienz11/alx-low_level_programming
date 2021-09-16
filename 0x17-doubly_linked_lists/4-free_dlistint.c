#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - frees a listint_t list
 * @head: head of linked list
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *pres;
dlistint_t *foll;

pres = head;

while (pres != NULL)
{
foll = pres->next;
free(pres);
pres = foll;
}
}
