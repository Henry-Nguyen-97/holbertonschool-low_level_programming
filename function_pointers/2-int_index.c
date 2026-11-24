#include "function_pointers.h"

int int_index/* for betty */(int *array, int size, int (*cmp)(int))
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
