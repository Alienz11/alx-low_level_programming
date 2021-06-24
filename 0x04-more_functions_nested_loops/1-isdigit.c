#include <stdio.h>
#include "holberton.h"

/**
 * _isdigit - check the code for digits
 *@c: parameter the int will use to check for the argument of the function
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= '0' &&  c <= '9')
{
return (1);
}
else
return (0);
}
