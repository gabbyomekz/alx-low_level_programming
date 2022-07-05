#include "main.h"

/**
 * print_sign - Describes a function that prints the sign of a number
 * @n: integer arguments if n is > 0, < 0 or 0
 * Return: 0, 1, or -1 depending on the outcome
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
