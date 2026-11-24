#include "function_pointers.h"

/**
* int_index - call a function, pass elements from an array to it
* @array: point to input array
* @size: the size of the array
* @cmp: point to the function needed to be called
* Declare i as element position of an array
* Check if size <= 0, or array == NULL, or cmp == NULL, return -1 if it is
* return i at first encounter where the function doesn't return 0
* if no element found, return -1
*
* Return: 1 or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (-1);
}
