#ifndef DOG_H
#define DOG_H
/**
 * struct dog - user defined variable
 * @name: attribute1
 * @owner: attribute2
 * @age: attribute3
 */
struct dog
{
char *name;

char *owner;

float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);

#endif
