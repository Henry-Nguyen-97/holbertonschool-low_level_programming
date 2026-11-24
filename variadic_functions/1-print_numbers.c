#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char s;
	unsigned int i;
	int x;

	va_start(args, n);

	i = x = 0;
	s = *separator;
	while (i < n - 1)
	{
		x = va_arg(args, int);
		printf("%d%s ", x, s);
		i++;
	}

	va_end(args);
}
