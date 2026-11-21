#include "main.h"

int _strlen_recursion/* For betty */(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return (1 + _strlen_recursion(s + 1));
}
