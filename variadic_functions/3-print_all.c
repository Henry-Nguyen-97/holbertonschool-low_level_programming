#include "variadic_functions.h"

/**
 * print_char - prints a char argument
 * @args: pointer to the list of arguments
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_int - prints an int argument
 * @args: pointer to the list of arguments
 */
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - prints a float argument
 * @args: pointer to the list of arguments
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - prints a string argument, or (nil) if it is NULL
 * @args: pointer to the list of arguments
 */
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

/**
 * print_all - prints anything, based on a format string
 * @format: list of the types of the arguments (c, i, f, s)
 *
 * Description: any other character in format is ignored, and a new line
 * is printed at the end
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int pos, i;
	char *s;

	/* A typedef struct is declared in the .h file to make the type_t data type for the array */
	type_t arr[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};

	va_start(args, format);

		pos = 0;
		s = "";
		while (format != NULL && format[pos] != '\0') /* This is looping the input of format */
		{
			i = 0;
			while (arr[i].letter != '\0') /* This is looping the letters (1st elements) of the array, comparing to input of format, to get the correct function (2nd elements) */
			{ /* We are not looping the input arguments since they don't need to be checked, they just need to be printed in order with the correct data type according to the order in format */
				if (arr[i].letter == format[pos])
				{
					/** Print the separator before the arguments to avoid leaving a separator after the last argument
					* Made separator = "" first to avoid printing it before the 1st argument, then make it become ", " or whatever after printing the 1st argument
					*/
					printf("%s", s);
					arr[i].print_function(&args);
					s = ", ";
				}
				i++;
			}
			pos++;
		}
		printf("\n");
	va_end(args);
}
