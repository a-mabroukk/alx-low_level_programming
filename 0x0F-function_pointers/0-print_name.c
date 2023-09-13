#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - function that prints a name
*@name: name of function
*@f: function pointer
*Description: Write a function that prints a name
*/
void print_name(char *name, void (*f)(char *))
{
if (f && name)
{
(*f)(name);
}
}
