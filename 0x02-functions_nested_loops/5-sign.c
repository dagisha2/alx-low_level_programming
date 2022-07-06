#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: number to be checked
 *
 * Return:0,1,-1
 */
int print_sign(int n)
{
	if (n < 0)
{
	_putchar(45);
	return (1);
}
else if (n > 0)
{
	_putchar(43);
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
