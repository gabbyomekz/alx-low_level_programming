#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: parameter function of type char
 * Return: exits the code successfully
 */

int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;

return (i);
}
