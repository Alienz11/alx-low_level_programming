#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size 0f a char: %lu byte(s)\n", sizeof(char));
printf("Size 0f an int: %lu byte(s)\n", sizeof(int));
printf("Size 0f a long int: %lu byte(s)\n", sizeof(long int));
printf("Size 0f a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size 0f a float: %lu byte(s)\n", sizeof(float));
return (0);
}
