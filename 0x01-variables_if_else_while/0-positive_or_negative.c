#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A place to declare and describe functions
 * number stored in variable n
 * printf - To display to standard output
 * Return: Displays zero to show success
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("if the number is greater than 0: is positive\n");
}
if (n == 0)
{
	printf("if the number is 0: is zero\n");
}
if (n < 0)
{
	printf("if the number is less than 0: is negative\n");
}
return (0);
}
