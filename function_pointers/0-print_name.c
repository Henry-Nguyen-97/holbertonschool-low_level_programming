#include "function_pointers.h"

/**
* Call the function that f points to
* Pass the data that name points to into what f points to
* The function f points to accept char type
* The data name points to accept char type
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
