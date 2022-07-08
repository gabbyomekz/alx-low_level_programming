#include "main.h"

/**
 * more_numbers - function to print 10 times the number from 0 to 14
 * void - signifies empty function parameter
 * _putchar - To display prints
 * Return: exits the code
 */

void more_numbers(void)
{
char j, k;
int i = 0;

while (i < 10)
{
for (j = 0; j <= 14; j++)
{
k = j;
if (j > 9)
{
_putchar('1');
k = j % 10;
}
_putchar('0' + k);
}
_putchar('\n');
i++;
}
}
