#include "function_pointers.h"
#include <stdio.h>
/**
*array_iterator - executes a function given as a parameter
*on each element of array
*@array: array in which a function must be implemented as a parameter
*to its elements
*@size: is the size of the array
*@action: is a pointer to the function you need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int c;
if (action && array && size)
{
for (c = 0; c < size; c++)
{
(*action)(array[c]);
}
}
}
