#include "function_pointers.h"

/**
* Declare i as element position of an array
* Check if size <= 0, return -1 if it is
* int_index - call a function, pass elements from an array to it
* return i at first encounter where the function doesn't return 0
* if no element found, return -1
* @array: point to input array
* @size: the size of the array
* @cmp: point to the function needed to be called
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
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
