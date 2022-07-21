#include "main.h"

/**
 * _puts_recursion - printing recursively
 * @s: input pointer character
 *
 * Return: nothing
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*(s + 0));
_puts_recursion((s + 1));
}
else
{
_putchar('\n');
return;
}
}
