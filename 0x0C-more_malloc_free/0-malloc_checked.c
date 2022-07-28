#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc used to allocate memory
 * @b:  Number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
