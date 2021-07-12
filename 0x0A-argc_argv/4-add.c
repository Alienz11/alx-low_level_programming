#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
#include <ctype.h>

/**
 * main - To creat a function that names the file even when renamed.
 * @argc: argument of function.
 * @argv: argument of function.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i;
int j;
int sum;
(void)argc;
if (argc >= 3)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) >= -10000 && atoi(argv[i]) <= 10000)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}

if (argc == 2)
{
j = atoi(argv[1]);
printf("%d\n", j);
}

if (argc <= 1)
{
printf("0\n");
}

return (0);
}
