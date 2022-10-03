#include "main.h"

/**
 * _isdigit - function to check for digits from 0 to 9
 * @c: parameter of the type int passed to the function
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
