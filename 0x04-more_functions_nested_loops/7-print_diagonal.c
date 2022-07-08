#include "main.h"

/**
 * print_diagonal - function to draw a diagonal line on the terminal
 * @n: function parameter of the type int
 * Return: exits the function
 *
 */

void print_diagonal(int n)
{
int i = 0, ii;

while (i < n && n > 0)
{
ii = 0;
while (ii < i)
{
_putchar(' ');
ii++;
}
_putchar('\\');
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
