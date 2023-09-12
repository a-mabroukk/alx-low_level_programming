#ifndef DOG_H
#define DOG_H

/**
*struct dog - a new type of struct should be defined
*@name: the name of dog
*@age: an age of dog
*@owner: the owner of dog
*Description: Define a new type struct dog with it's elements
*/
struct dog
{
char *name;
float age;
char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
