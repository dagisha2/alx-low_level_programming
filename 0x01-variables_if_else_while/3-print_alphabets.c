#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

for (n = 'a' ; n <= 'z' ; n++)
{
putchar(n);
if (n == 'z')
{
for (n = 'A' ; n <= 'Z' ; n++)
{
putchar(n);
}
break;
}
}
putchar('\n');
return (0);
}
