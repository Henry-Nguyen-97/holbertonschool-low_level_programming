#include "variadic_functions.h"

void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

void print_string(va_list *args)
{
	char *str;
	str = va_arg(*args, char*);
	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	va_list args;
}
