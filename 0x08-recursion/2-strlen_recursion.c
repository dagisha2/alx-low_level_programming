#include <stdio.h>

/**
 * _strlen_recursion - count length of string using recursion
 * @s: input pointer character
 *
 * Return: 0
*/
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}
