#include "main.h"

/**
 * print_numbers - function declared to print numbers from 0 to 9
 * followed with a new line
 * void - means empty parameter
 * Return: exits the function
 */

void print_numbers(void)
{
char n;

for (n = 0; n < 10; n++)
{
_putchar('0' + n);
}
_putchar('\n');
}
