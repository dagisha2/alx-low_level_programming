#include "main.h"

#include <stdlib.h>

/**
* create_array - creating array and intializing it
* @size: input parameter
* @c: input character
*
* Return: 0
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;

char *arr;

arr = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
if (arr == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
