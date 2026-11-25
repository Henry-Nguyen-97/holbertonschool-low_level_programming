#include "variadic_functions.h"

/**
* print_numbers - print numbers from input n arguments,
* separated by the separator argument
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

	/* Check that n > 0, print a new line if not */
	if (n < 1)
	{
		printf("\n");
		return;
	}

	/* Print nothing separator == NULL */
	if (separator == NULL)
	{
		s = "";
	}
	else /* Else print the separator */
	{
		s = separator;
	}

	va_start(args, n);

	i = x = 0;

	/* Print all arguments except the last one */
	while (i < n - 1)
	{
		x = va_arg(args, int);
		printf("%d%s", x, s);
		i++;
	}
	/* Print the last argument */
	x = va_arg(args, int);
	printf("%d\n", x);

	va_end(args);
}
