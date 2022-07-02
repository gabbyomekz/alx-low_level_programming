#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - To declare function
 * body - Instructions to do task
 * printf or putchar - To print
 * Return: 0 success
*/
int main(void)
{
char ch;
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
