#include "main.h"

/**
 * print_line - print line
 * @n: number of lines
 *
 * Return: nothing
*/
void print_line(int n)
{
while (n > 0)
{
if (n <= 0)
{
_putchar('\n');
break;
}
_putchar(95);
n--;
}
_putchar('\n');
}
