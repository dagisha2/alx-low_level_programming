#include "main.h"

/**
 * _strlen - print the length of string
 * @s: input pointer character
 *
 * Return: length
*/
int _strlen(char *s)
{
int y = 0;

while (*(s + y) != '\0')
{
	y++;
}
return (y);
}

