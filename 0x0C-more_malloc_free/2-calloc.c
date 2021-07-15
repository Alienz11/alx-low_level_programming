#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _calloc - check the code for Alx school students.
 * @nmemb: argument of function.
 * @size: argument of function.
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *str;
unsigned int i = 0;
char *set;

if (size == 0)
{
return (NULL);
}
if (nmemb == 0)
{
return (NULL);
}
str = malloc(size * nmemb);

if (str == NULL)
{
return (NULL);
}

set = str;
for (i = 0; i < (size * nmemb); i++)
{
set[i] = 0;
}

return (str);
}
