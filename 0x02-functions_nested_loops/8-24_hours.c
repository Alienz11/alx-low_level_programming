#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * jack_bauer - check the code for ALX School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
int hour = 0;
int minute = 0;
int _23;
int _59;
while (hour <= 23)
{
while (minute <= 59)
{
_59 = minute % 10;
_23 = hour % 10;
_putchar(hour / 10 + '0');
_putchar(_23 + '0');
_putchar(':');
_putchar(minute / 10 + '0');
_putchar(_59 + '0');
minute++;
_putchar('\n');
}
hour++;
minute = 0;
}
}
