#include "main.h"

/**
* puts2 - print even only
* @str: input pointer character
*
* Return: nothing
*/
void puts2(char *str)
{
int n;

if (*str)
{
for (n = 0 ; n < 10 ; n++)
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
}
}
else
{
_putchar('\n');
}
_putchar('\n');
}
