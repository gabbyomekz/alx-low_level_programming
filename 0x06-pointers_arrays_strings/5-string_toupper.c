#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * Of a string to uppercase
 * @str: string to modify
 * Return: The resulting string
 */

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] <= 'z' && str[i] >= 'a')
str[i] -= 32;
}
return (str);
}
