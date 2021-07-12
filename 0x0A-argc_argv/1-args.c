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

int main(int argc, char **argv)
{
(void)**argv;
for (argc = 0; *argv[argc] != '\0'; argc++)
{
printf("%d\n", argc);
}
return (0);
}
