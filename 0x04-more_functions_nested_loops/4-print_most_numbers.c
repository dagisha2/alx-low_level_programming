#include "main.h"
/**
 * print_most_numbers - printing most of the numbers between 0 and 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
int i;

for (i = '0' ; i <= '9' ; i++)
{
if (i == '2')
{
continue;
}
if (i == '4')
{
continue;
}
else
{
_putchar(i);
}
}
_putchar('\n');
}
