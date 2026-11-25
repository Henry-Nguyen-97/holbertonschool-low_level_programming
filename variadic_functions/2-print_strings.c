#include "variadic_functions.h"

/**
* print_strings - Print n string arguments
* separated by separator
* @separator: The separator argument to be printed
* print nothing if separator == NULL
* @n: Number of string arguments to be printed
* print (nil) if argument == NULL
*
* Return: Print the correct output.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *s;
	unsigned int i;
	char *x;

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

	i = 0;
	x = NULL;
	va_start(args, n);

	while (i < n - 1)
	{
		x = va_arg(args, char *);
		printf("%s%s", x != NULL ? x : "(nil)", s); /* Print string if it's not NULL, print (nil) if it's NULL */
		i++;
	}
	x = va_arg(args, char *);
	printf("%s\n", x != NULL ? x : "(nil)");

	va_end(args);
}
