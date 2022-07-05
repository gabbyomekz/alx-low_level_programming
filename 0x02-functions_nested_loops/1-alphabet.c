#include "main.h"

/**
 * print_alphabet - Describes the function declared to print lowercase alphabet
 * putchar - To print a the loop j with a new line
 */

void print_alphabet(void)
{
int j;

for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
