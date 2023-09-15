#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all - a function that prints anything
*@format: is a list of types of arguments passed to the function
*Description: Write a function that prints anything
*/
void print_all(const char * const format, ...)
{
va_list ptr;
unsigned int c = 0, i = 0;
char *string;
char *separator = ", ";
va_start(ptr, format);
while (format && format[i])
{
i++;
}
while (format && format[c])
{
if (c == (i - 1))
{
separator = "";
}
switch (format[c])
{
case 'c':
printf("%c%s", va_arg(ptr, int), separator);
break;
case 'i':
printf("%d%s", va_arg(ptr, int), separator);
break;
case 'f':
printf("%f%s", va_arg(ptr, double), separator);
break;
case 's':
string = va_arg(ptr, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s%s", string, separator);
}
}
c++;
}
printf("\n"), va_end(ptr);
}
