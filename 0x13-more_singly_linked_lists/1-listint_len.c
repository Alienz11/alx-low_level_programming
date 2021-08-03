#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A stringlist funtion to print a list.
 * @h: Argument variable of the function.
 * Return: Amount of nodes counted
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;
listint_t *ptr = h ? h->next : NULL;

if (h)
{
count++;
}

if (ptr)
{
while (ptr != NULL)
{
ptr = ptr->next;
count++;
}
}
return (count);
}
