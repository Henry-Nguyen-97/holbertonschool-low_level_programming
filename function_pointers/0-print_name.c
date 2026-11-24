#include "function_pointers.h"

/**
* print_name - Call the function that "f" points to then
* pass the data that "name" points to into what "f" points to
* The function "f" points to accept char type
* The data "name" points to accept char type
* @name: the name to be printed
* @f: pointer to the function that prints the name
* 
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
