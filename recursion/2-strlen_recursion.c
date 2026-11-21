#include "main.h"

int count;
count = 0;

int _strlen_recursion/* For betty */(char *s)
{
	if (*s == '\0')
	{
		return (count);
	}
	count++;
	_strlen_recursion(s + 1);
}
