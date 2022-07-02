#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Describes function declaration
 * Implement the task to be done
 * putchar - displays characters
 * Return: success is zero
*/

int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
	putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
	putchar(ch);
}
putchar(10);

return (0);
}
