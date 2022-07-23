#include "main.h"

/**
* puts2 - print even only
* @str: input pointer character
*
* Return: nothing
*/
void puts2(char *str)
{
int n = 0;

int i;

while (*(str + n) != '\0')
{
n++;
}
for (i= 0 ; i < n ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
