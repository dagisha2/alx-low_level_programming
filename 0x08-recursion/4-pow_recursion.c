#include "main.h"

/**
 * _pow_recursion - x the power of y
 * @x: input integer one
 * @y: input integer two
 *
 * Return: 0
*/
int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
if (y < 0)
{
return (-1);
}
else
{
return (1);
}
return (0);
}
