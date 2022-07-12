#include "main.h"

/**
 * print_rev - A function to print a string in revers
 * @s: pointer to type char
 * Return: void
 */

void print_rev(char *s)
{
int i = 0;

while (s[i])
i++;

while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
