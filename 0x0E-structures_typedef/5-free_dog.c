#include <stdlib.h>
#include "dog.h"
/**
*free_dog - frees dogs
*@d: a variable of type struct dog should be free
*Description: Write a function that frees dogs
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
