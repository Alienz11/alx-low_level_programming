#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - A stringlist funtion to print a list.
 * @head: Argument variable of the function.
 * @str: Argument variable of the function.
 * Return: Amount of nodes counted
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len = 0;
char *s;
list_t *node2;
list_t *last;

for (len = 0; str && str[len] != '\0'; len++)
;

last = head ? *head : NULL;
while (last && last->next != NULL)
last = last->next;


node2 = malloc(sizeof(list_t));
if (node2)
{
s = malloc(sizeof(char) * (len + 1));
if (!s)
{
free(node2);
return (NULL);
}
for (len = 0; str[len] != '\0'; len++)
s[len] = str[len];
s[len] = '\0';
node2->str = s;
node2->len = len;
node2->next = NULL;
if (last)
last->next = node2;
if (*head == NULL)
*head = node2;
}
return (node2);
}
