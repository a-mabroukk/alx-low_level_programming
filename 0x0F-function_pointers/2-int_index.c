#include <stdio.h>
#include "function_pointers.h"
/**
*int_index - searches for an integer
*@array: an array to search it's elements
*@size: is the number of elements in the array array
*@cmp: is a pointer to the function to be used to compare values
*Description: Write a function that searches for an integer
*Return: the index of the first element for which the cmp
*function does not return 0 or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int c;
if (cmp && array)
{
if (size <= 0)
{
return (-1);
}
for (c = 0; c < size; c++)
{
if (cmp(array[c]))
{
return (c);
}
}
}
return (-1);
}
