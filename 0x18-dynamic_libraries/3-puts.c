#include "main.h"

/**
 * _puts - A function that prints a screen followed by a new line to stdo
 * @str: function parameter of type char
 * Return: void
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
