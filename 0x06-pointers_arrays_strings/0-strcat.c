#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: First string
 * @src: Second string to be appended to dest
 * Return: The pointer to dest
 */

char *_strcat(char *dest, char *src)
{

int a = -1, i;

for (i = 0; dest[i] != '\0'; i++)
;
do {
a++;
dest[i] = src[a];
i++;
} while (src[a] != '\0');
return (dest);
}
