#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: input pointr character
 *
 * Return: nothing
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion((s + 1));
_putchar(*(s + 0));
}
else
{
return;
}
}
