#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
int palindrome_check(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int len = 0;

if (*(s + len))
{
len++;
len += _strlen(s + len);
}

return (len);
}

/**
 * palindrome_check - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int palindrome_check(char *s, int len, int i)
{
if (s[i] == s[len / 2])
return (1);

if (s[i] == s[len - i - 1])
return (palindrome_check(s, len, i + 1));

return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
int i = 0;
int len = _strlen(s);

if (!(*s))
return (1);

return (palindrome_check(s, len, i));
}
