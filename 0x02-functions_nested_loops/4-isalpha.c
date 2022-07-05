#include "main.h"

/**
 * _isalpha - A function declaration to check for alphabetic characters
 * @c: character arguments which can be uppercase or lowercase
 * Return: 0 or 1 depending on the outcome of the program
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A'  && c <= 'Z'));
}
