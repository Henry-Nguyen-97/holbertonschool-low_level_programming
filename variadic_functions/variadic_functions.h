#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list *args);
void print_int(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);

/**
 * struct data_type - pairs a format letter with its print function
 * @letter: the format letter
 * @print_function: function that reads and prints that type
 */
struct data_type {
	char letter;
	void (*print_function)(va_list *args);
};

typedef struct data_type type_t;

#endif
