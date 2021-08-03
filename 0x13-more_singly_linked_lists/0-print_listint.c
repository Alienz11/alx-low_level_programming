#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A stringlist funtion to print a list.
 * @h: Argument variable of the function.
 * Return: Amount of nodes counted
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;
listint_t *ptr = h ? h->next : NULL;

if (h)
{
printf("%d\n", h->n);
count++;
}

if (ptr)
{
while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
count++;
}
}
return (count);
}
