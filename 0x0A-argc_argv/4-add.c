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
int i = 1, sum, j = 0;
(void) argc;
if (argc < 1)
{
printf("%d\n", 0);
}
while (i < argc)
{
while (argv[i][j] != '\0')
{
if (!(isdigit(argv[i][j])))
{
return (printf("Error\n"), 1);
}
j++;
}
sum += (atoi(argv[i]));
i++;
}
printf("%d\n", sum);
return (0);
}
