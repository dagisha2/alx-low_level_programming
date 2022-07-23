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

for (n = 0 ; n < 10 ; n++)
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
