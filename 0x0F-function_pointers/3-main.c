#include "3-calc.h"
/**
*main - Entry point
*@argc: the number of arguments passed to the program
*@argv: a one-dimensional array of strings
*Description: Write a program that performs simple operations
*Return: 0
*/
int main(int argc, char *argv[])
{
char *s = argv[2];
int a, b;
if (argc != 4) 
{
printf("%s\n", "Error");
exit (98);
}
if ((get_op_func(argv[2]) == NULL) || (s[1] != '\0'))
{
printf("%s\n", "Error");
exit (99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if (b == 0 && (s[0] == '/' || s[0] == '%'))
{
printf("%s\n", "Error");
exit (100);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
printf("%d\n", get_op_func(argv[2])(a, b));
return (0);
}
