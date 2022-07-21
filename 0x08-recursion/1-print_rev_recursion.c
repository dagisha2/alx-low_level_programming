#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: input pointr character
 *
 * Return: nothing
*/
void _print_rev_recursion(char *s)
{
if (*s < '\0')
{
return;
}
else 
{
_putchar(*s);
_print_rev_recursion((s-1));
_print_rev_recursion(s);
}
}
