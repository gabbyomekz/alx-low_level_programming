#include "main.h"

/**
 * _isupper - function declaration to display uppercase alphabets
 * @c: describes the function parameter, c
 * Return: 1 for uppercase and 0 for otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
