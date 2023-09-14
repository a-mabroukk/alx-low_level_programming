#include "3-calc.h"
/**
*op_add - a function that does addition operation
*@a: first number
*@b: second number should be added
*Description: write a function that does addition operation
*Return: the sum of operation
*/
int op_add(int a, int b)
{
int sum;
sum = a + b;
return (sum);
}
/**
*op_sub - a finction that does subtraction operation
*@a: first number
*@b: subtracted number
*Description: Write a function that perform subraction operation
*Return: the difference of operation
*/
int op_sub(int a, int b)
{
int difference;
difference = a - b;
return (difference);
}
/**
*op_mul - a function that does multiplication operation
*@a: the multiplier number
*@b: the multiplicand number
*Description:  Write a finction that does multiplication operation
*Return: the product
*/
int op_mul(int a, int b)
{
int prod;
prod = a * b;
return (prod);
}
/**
*op_div -  function that does division operation
*@a: the dividend number
*@b: the dividor number
*Description: Write a finction that does division operation
*Return: the result of the division
*/
int op_div(int a, int b)
{
int result;
result = a / b;
return (result);
}
/**
*op_mod - function that does modulo operation
*@a: dividend number
*@b: dividor number
*Description: Write a finction that does modulo operation
*Return: the remainder of the division
*/
int op_mod(int a, int b)
{
int remain;
remain = a % b;
return (remain);
}
