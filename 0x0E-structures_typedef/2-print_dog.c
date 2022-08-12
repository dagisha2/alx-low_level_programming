#include "dog.h"
#include <stdio.h>

/**
* print_dog - print the element of the the struct dog
* @d: pointer to the passed struct dog
*
* Return: nothing
*/
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\nAge: %.1f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
if (d == NULL)
{
printf("\n");
}
if (d->name == NULL)
{
printf("(nil)");
}
if (d->owner == NULL)
{
printf("(nil)");
}
}

