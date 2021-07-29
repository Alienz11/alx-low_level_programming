#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - A stringlist funtion to print a list.
 * @h: Argument variable of the function.
 *
 */

size_t print_list(const list_t *h)
{
size_t nodecount = 0;
list_t *s = h ? h->next : NULL;

if (h)
{
printf("[%d] %s\n", h->str ? h->len :  0, h->str ? h->str : "(nil)");
nodecount++;
}

if (s)
{
while (s != NULL)
{
printf("[%d] %s\n", s->str ? s->len :  0, s->str ? s->str : "(nil)");
s = s->next;
nodecount++;
}
}
return (nodecount);
}

