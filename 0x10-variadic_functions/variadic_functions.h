#ifndef _variadic_functions_h_
#define _variadic_functions_h_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

int _putchar(char);
#include <string.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif /*_variadic_functions_h_*/
