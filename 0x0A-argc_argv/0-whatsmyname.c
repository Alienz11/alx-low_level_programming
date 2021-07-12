#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _name_the_file - To creat a function that names the file even when renamed.
 * @argc: argument of function.
 * @argv: argument of function.
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)

{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
