#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code for Alx school students.
 * @argc: argument counter.
 * @argv: argument value.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int a, b, result;
a = atoi(argv[1]);
b = atoi(argv[3]);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}
result = (get_op_func(argv[2]))(a, b);
printf("%d\n", result);
return (0);
}
