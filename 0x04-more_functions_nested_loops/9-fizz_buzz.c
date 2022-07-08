#include <stdio.h>

/**
 * main - a function that prints the number 1 to 100
 * prints Fizz for multiples of three
 * prints Buzz for multiples of five
 * prints FizzBuzz for multiples of three and five
 * Each number or word should be seperated by a space
 * Return: exits the program
 */

int main(void)
{
int n = 1;

while (n <= 100)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}
if (n != 100)
{
printf(' ');
}
n++;
}
printf('\n');
return (0);
}

