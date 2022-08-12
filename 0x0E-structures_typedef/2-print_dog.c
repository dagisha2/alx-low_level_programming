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
if (d == 0)
return;
if (d != 0)
{
if (!(d->name))
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %.1f\n", d->age);
if (!(d->owner))
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
}
