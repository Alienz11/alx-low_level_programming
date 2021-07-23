#ifndef _variadic_functions_h_
#define _variadic_functions_h_


#include <string.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - A struct fuction taht gives details of a dog.
 * @view: vriable to print name of dog.
 *
 * @share: vriable to print name of dog.
 */

typedef struct print
{
char *view;
void (*share)(va_list arg);
} print_t;

#endif /*_variadic_functions_h_*/
