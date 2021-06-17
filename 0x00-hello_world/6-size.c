#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int o;
long long int p;
float f;

printf("Size 0f a char is: %lu.\n", (unsigned long)sizeof(c));
printf("Size 0f an int is: %lu.\n", (unsigned long)sizeof(i));
printf("Size 0f a long int is: %lu.\n", (unsigned long)sizeof(o));
printf("Size 0f a long long int is: %lu.\n", (unsigned long)sizeof(p));
printf("Size 0f a float is: %lu.\n", (unsigned long)sizeof(f));
return (0);
}
