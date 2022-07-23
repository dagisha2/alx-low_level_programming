#include "main.h"
#include <stdio.h>

/**
 * print_array - print the element of an array
 * @a: input integer pointer
 * @n: input integer
 *
 * Return: nothing
*/
void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
else
{
printf(" ");
}
}
}
