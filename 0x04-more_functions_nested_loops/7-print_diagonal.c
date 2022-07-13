#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number of slash
 *
 * Return: nothing
*/
void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j <= i - 1 ; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
