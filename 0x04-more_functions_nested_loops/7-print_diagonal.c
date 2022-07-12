#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number of slash
 *
 * Return: nothing
*/
void print_diagonal(int n)
{
while (n > 0)
{
if (n <= 0)
{
_putchar('\n');
break;
}
_putchar(92);
_putchar('\n');
n--;
}
_putchar('\n');
}
