#include "main.h"

/**
 * *_strncpy - Check the code
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 * Description: A function that combines 2 string
 * Return: the pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
