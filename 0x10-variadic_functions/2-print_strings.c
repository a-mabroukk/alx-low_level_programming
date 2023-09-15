#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - a function that prints strings
*@separator: is the string to be printed between the strings
*@n: is the number of strings passed to the function
*Description: Write a function that prints strings, followed by a new line
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list ptr;
unsigned int c;
char *string;
if (separator == NULL)
{
separator = "";
}
va_start(ptr, n);
for (c = 0; c < n; c++)
{
string = va_arg(ptr, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (c < i - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ptr);
}
