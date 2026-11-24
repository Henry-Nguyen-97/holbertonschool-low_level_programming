#include "3-calc.h"

/**
* op_add - sum of 2 ints
* op_sub - difference of 2 ints
* op_mul - product of 2 ints
* op_div - devision of 2 ints
* op_mod - remainder of division of 2 ints
* @a: 1st int
* @b: 2nd int
*
* Return: the result of the operations
*/

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
