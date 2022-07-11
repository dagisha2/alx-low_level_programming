#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Return: 0
*/
void more_numbers(void)
{
int i, j, k;

for (i = 0 ; i < 10 ; i++)
{
for (j = '0'; j <= '9' ; j++)
{
_putchar(j);
if (j == '9')
{
for (k = 10 ; k <= 14 ; k++)
{
_putchar(k);
}
break;
}
}
_putchar('\n');
}
}

