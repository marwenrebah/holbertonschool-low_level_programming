#include "function_pointers.h"
/**
 * op_add - adds two num
 *
 * @a: first num
 *
 * @b: second num
 *
 * Return: their sum
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - difference of a and b
 *
 * @a: first num
 *
 * @b: second num
 *
 * Return: their difference
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - product of 2 given numbers
 *
 * @a: first num
 *
 * @b: second num
 *
 * Return: their product
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - division of a by b
 *
 * @a: devidend
 *
 * @b: devisor
 *
 * Return: a by b
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - remainder of a by b
 *
 * @a: devidend
 *
 * @b: devisor
 *
 * Return: remainder of a by b
*/
int op_mod(int a, int b)
{
return (a % b);
}
