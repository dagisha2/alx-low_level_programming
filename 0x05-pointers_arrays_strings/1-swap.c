#include "main.h"
/**
* swap_int - swap the value of a and b
* @a: argu1
* @b: argu2
* Return: nothing
*/
void swap_int(int *a, int *b)
{
int c;

c = *b;	
*b = *a;
*a = c;
}
