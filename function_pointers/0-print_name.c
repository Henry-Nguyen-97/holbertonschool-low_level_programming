#include "function_pointers.h"

/**
* print_name - Call the function that "f" points to then
* pass the data that "name" points to into what "f" points to
* @f - The function "f" points to accept char type
* @name - The data "name" points to accept char type
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
