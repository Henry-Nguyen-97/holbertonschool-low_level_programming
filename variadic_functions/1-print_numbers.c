#include "variadic_functions.h"

/**
* print_numbers - print numbers from input n arguments, separated by the separator argument
* @separator: The separator to be printed
* @n: number of arguments to be printed
*
* Return: Print the numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *s;
	unsigned int i;
	int x;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	if (separator == NULL)
	{
		s = "";
	}
	else
	{
		s = separator;
	}

	va_start(args, n);

	i = x = 0;

	while (i < n - 1)
	{
		x = va_arg(args, int);
		printf("%d%s", x, s);
		i++;
	}
	x = va_arg(args, int);
	printf("%d\n", x);

	va_end(args);
}
