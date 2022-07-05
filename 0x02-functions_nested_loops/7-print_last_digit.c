#include "main.h"

/**
 * print_last_digit - A function declaration to print the last digit of a numb
 * @r: Contains passed argument
 * Return: returns the last digit and exit
 */

int print_last_digit(int r)
{
int n;

if (r < 0)
n = -1 * (r % 10);
else
n = r % 10;

_putchar((n % 10) + '0');

return (n % 10);
}
