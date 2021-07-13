#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _strdup - check the code for Alx school students.
 * @str: argument of function.
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{

unsigned int len = 0;
unsigned int i = 0;
char *array;

if (str == NULL)
{
return (NULL);
}

while (str[i] != '\0')
{
len++;
i++;
}
array = malloc((len * (sizeof(char))) + 1);
if (array == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
array[i] = str[i];
i++;
}
return (array);
}
