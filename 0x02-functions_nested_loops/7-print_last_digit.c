#include "main.h"

/**
 * print_last_digit - A function declaration to print the last digit of a numb
 * @n: Contains passed argument
 * Return: returns the last digit and exit
 */

int print_last_digit(int n)
{
int x;

if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
