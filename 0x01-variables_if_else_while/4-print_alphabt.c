#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Describes the function
 * Working on the task insructions
 * putchar -To display characters
 * Return: 0 for success
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
}
	putchar(10);
	return (0);
}
