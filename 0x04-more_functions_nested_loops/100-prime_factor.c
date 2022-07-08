#include <stdio.h>

/**
 * main - prints prime numbers
 * Write a program that finds and prints the largest prime factors
 * Return: exits the function
 */

int main(void)
{
long int x = 612852475143;
long int pf;

for (pf = 2; pf < x; pf++)
{
if (x % pf == 0)
{
x = x / pf;
}
}
printf("%ld\n", pf);
return (0);
}


