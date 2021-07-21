#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - check the code for Alx school students.
 * @a: argument of function.
 * @b: argument of function.
 * Return: Always 0 (Success)
 */

int op_add(int a, int b)
{
return (a + b);
}


/**
 * op_sub - check the code for Alx school students.
 * @a: argument of function.
 * @b: argument of function.
 * Return: Always 0 (Success)
 */

int op_sub(int a, int b)
{
return (a - b);
}


/**
 * op_mul - check the code for Alx school students.
 * @a: argument of function.
 * @b: argument of function.
 * Return: Always 0 (Success)
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - check the code for Alx school students.
 * @a: argument of function.
 * @b: argument of function.
 * Return: Always 0 (Success)
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - check the code for Alx school students.
 * @a: argument of function.
 * @b: argument of function.
 * Return: Always 0 (Success)
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
