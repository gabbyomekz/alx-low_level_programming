#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Declares the function
 * body - Instructs on the task to be done
 * printf or putchar - To display
 * Return: Succes is 0
*/
int main(void)
{
int ch;

for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
