#include <stdlib.h>
#include "dog.h"
/**
*init_dog - initialize a variable of type struct dog
*@d: a variable of tyoe struct dog should be initialized
*@name: the name of dog
*@age: an age of dog
*@owner: the owner of dog
*Desription: Write a function that initialize a variable of type struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{d->name = name;
d->age = age;
d->owner = owner;
}
}

