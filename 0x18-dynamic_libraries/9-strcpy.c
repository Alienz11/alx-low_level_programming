#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
int x = -1;

do {
x++;
dest[x] = src[x];
} while (src[x] != '\0');
return (dest);
}
