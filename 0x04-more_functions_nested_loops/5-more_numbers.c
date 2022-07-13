#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Return: 0
*/
void more_numbers(void)
{
int i, j;

for (i = 0 ; i < 10 ; i++)
{
for (j = 48 ; j <= 57 ; j++)
{
_putchar(j);
_putchar(';
}
_putchar('\n');
}
}
