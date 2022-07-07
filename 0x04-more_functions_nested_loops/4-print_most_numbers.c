#include "main.h"

/**
 * print_most_numbers - function declared to print numbers from 0 to 9
 * followed by a new line
 * dont print 2 and 4
 * void - doesn't require a return value
 * Return: exits the function
 */

void print_most_numbers(void)
{
char m;

for (m = 0; m < 10; m++)
{
if (m != 2 && m != 4)
_putchar('0' + m);
}
_putchar('\n');
}
