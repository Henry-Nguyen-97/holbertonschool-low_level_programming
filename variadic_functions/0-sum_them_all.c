#include "variadic_functions.h"

/**
* sum_them_all - sum all arguments and return result
* @n: number of arguments passed to the function
*
* Return: Sum of all argument, 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s, x;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	i = s = x = 0;
	while (i < n)
	{
		x = va_arg(args, int);
		s += x;
		i++;
	}
	va_end(args);
	return (s);
}
