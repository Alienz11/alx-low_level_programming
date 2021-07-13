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

while (str[i] != '\0')
{
len++;
i++;
}
array = malloc(len * (sizeof(char)));
if (array == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
if (str == NULL)
{
return (0);
}
else
{
array[i] = str[i];
}
}
return (array);
}
