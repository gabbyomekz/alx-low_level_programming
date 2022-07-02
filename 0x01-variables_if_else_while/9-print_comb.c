#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Describe function
 * body - Instruction guide
 * Return: 0 success
*/

int main(void)
{
int ch;
for (ch = 48; ch <= 47; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
