#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

int _putchar(char);
void print_int(va_list arg);
void print_float(va_list arg);
void print_char(va_list arg);
void print_string(va_list arg);

/**
 * print_all - function that prints all variable forms.
 * @format: argument of function.
 * Return: Always 0 (Success)
 */

void print_all(const char * const format, ...)
{
int i = 0, j = 0;
va_list args;
char *separator = "";
print_t prints[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
};
va_start(args, format);
while (format && (*(format + i)))
{
j = 0;
while (j < 4 && (*(format + i) != *(prints[j].view)))
{
j++;
}
if (j < 4)
{
printf("%s", separator);
prints[j].share(args);
separator = ", ";
}
i++;
}
printf("\n");
va_end(args);
}

/**
 * print_int - function that prints integers.
 * @arg: argument of function.
 * Return: Always 0 (Success)
 */

void print_int(va_list arg)
{
int num;
num = va_arg(arg, int);
printf("%d", num);
}

/**
 * print_char - function that prints characters.
 * @arg: argument of function.
 * Return: Always 0 (Success)
 */

void print_char(va_list arg)
{
char c;
c = va_arg(arg, int);
printf("%c", c);
}

/**
 * print_float - function that prints decimals.
 * @arg: argument of function.
 * Return: Always 0 (Success)
 */

void print_float(va_list arg)
{
float f;
f = va_arg(arg, double);
printf("%f", f);
}

/**
 * print_string - function that prints strings.
 * @arg: argument of function.
 * Return: Always 0 (Success)
 */

void print_string(va_list arg)
{
char *list;

list = va_arg(arg, char *);
if (list == NULL)
{
printf("(nil)");
return;
}
printf("%s", list);
}
