#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - check the code for uppercase
 *@c: parameter the int will use to check for the argument of the function
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 0 &&  c <= 9)
{
return (1);
}
else
return (0);
}
