#include <stdio.h>

/**
* main - print Fizz, Buzz, FizzBuzz and the number itself.
* Return: 0
*/
int main(void)
{
int i;

for (i = 1 ; i <= 100 ; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
putchar('\n');
return (0);
}

