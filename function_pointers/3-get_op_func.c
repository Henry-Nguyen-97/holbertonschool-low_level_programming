#include "3-calc.h"

/**
* get_op_func - selects the function matching an operator
* @s: the operator as a string
*
* Return: pointer to the matching function, or NULL if none matches
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = { /* Declare and ini an array of the custom type op_t */
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	/* Loop till find a match between s and ops[i], or till ops[i] reachs NULL */
	while (s != NULL && ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}
	return (s != NULL ? ops[i].f : NULL); /** If s != NULL, return the function pointer f (calling the function), else return NULL
	* (Condition ? True : False) - If condition is true, return the data between ? and :, if false return data after :
	* Replacement for if else statments.
	*/
}
