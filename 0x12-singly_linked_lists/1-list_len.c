#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - A stringlist funtion to print a list.
 * @h: Argument variable of the function.
 * Return: Amount of nodes counted
 */

size_t list_len(const list_t *h)
{
size_t nodecount = 0;
list_t *s = h ? h->next : NULL;

if (h)
{
nodecount++;
}

if (s)
{
while (s != NULL)
{
s = s->next;
nodecount++;
}
}
return (nodecount);
}
