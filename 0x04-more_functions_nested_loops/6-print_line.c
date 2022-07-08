#include "main.h"

/**
 * print_line - function to draw a straight line in the terminal
 * @n: function parameter of type int
 * _putchar - To print
 * Return: exits the function
 */

void print_line(int n)
{
int i = 0;

while (i < n && n > 0)
{
_putchar('_');
i++;
}
_putchar('\n');
}
