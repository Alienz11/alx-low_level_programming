#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * leet - encodes a string into leetspeek.
 * @str: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */

char *leet(char *str)

{
int c, v;
char subs[] = "aAeEoOtTlL";
char imp[] = "43071";

c = 0;
for (c = 0; str[c] != '\0'; c++)
{
for (v = 0; subs[v] != '\0'; v++)
if (str[c] == subs[v])
str[c] = imp[v / 2];
}
return (str);
}
