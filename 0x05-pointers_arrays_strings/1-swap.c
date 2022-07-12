#include "main.h"

/**
 * swap_int - Function to perform a switch of values
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

