#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - print the element of the the struct dog
* @d: pointer to the passed struct dog
*
* Return: nothing
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (!(d->name))
{
printf("Name: (nil)\n");
}
if (!(d->owner))
{
printf("Owner: (nil)\n");
}
printf("Name: %s\n", d->name);
printf("Age: %.1f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else
{
printf("\n");
}
}
