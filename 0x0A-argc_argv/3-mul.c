#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * main - To creat a function that names the file even when renamed.
 * @argc: argument of function.
 * @argv: argument of function.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void)argv;
int i;
i = atoi(argv[1]) * atoi(argv[2]);
if (argc == 3)
{
printf("%d\n", i);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
