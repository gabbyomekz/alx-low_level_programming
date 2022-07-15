#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* main - Function to perform the task
* Remember:
* @n: variable n
* @a: array holding 5 integers
* @p: a pointer of type int
* Return: 0 for success
*/
p[5] = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
