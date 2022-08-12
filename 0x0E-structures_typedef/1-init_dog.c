#include "dog.h"
/**
 * init_dog - initialize the attributes of the structure
 * @d: pointer to the struct dog
 * @name: pointer to string which is the name of the dog
 * @age: age of the dog
 * @owner: pointer to string which is the name of owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
