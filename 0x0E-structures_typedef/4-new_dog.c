#include <stdlib.h>
#include "dog.h"
/**
*new_dog - creates a new dog
*@name: name of dog
*@age: age of dog
*@owner: the ower of dog
*Return: NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *nw_dog;
int c, nsize, osize;

for (nsize = 0; name[nsize] != '\0'; nsize++)
{
;
}
for (osize = 0; owner[osize] != '\0'; osize++)
{
;
}
nw_dog = malloc(sizeof(dog_t));
if (nw_dog == NULL)
{
return (NULL);
}
nw_dog->name = malloc(sizeof(nw_dog->name) * (nsize + 1));
if (nw_dog->name == NULL)
{
free(nw_dog);
return (NULL);
}
for (c = 0; c <= nsize; c++)
{
nw_dog->name[c] = name[c];
}
nw_dog->age = age;

nw_dog->owner = malloc(sizeof(nw_dog->owner) * (osize + 1));
if (nw_dog->owner == NULL)
{
free(nw_dog->name);
free(nw_dog);
return (NULL);
}
for (c = 0; c <= osize; c++)
{
nw_dog->owner[c] = owner[c];
}
return (nw_dog);
}
