#include "main.h"

/**
 * print_diagonal - function to draw a diagonal line on the terminal
 * @n: function parameter of the type int
 * Return: exits the function
 *
 */

void print_diagonal(int n)
{
int i = 0;

while (i < n && n > 0)
{
_putchar('\');
i++;
}
_putchar('\n');
}
