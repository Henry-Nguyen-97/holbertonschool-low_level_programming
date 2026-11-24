#include "function_pointers.h"

/**
* array_iterator - call a function, pass every elements of an array to it
* @array: the input array
* @size: the array's size
* @action: The function needed to be called
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
