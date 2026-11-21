#include "main.h"

/*Print string using recursion */
void _puts_recursion/* For betty */(char *s)
{
	if (*s == '\0') /* If at end of string, line break and return */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s); /* Print char */
	_puts_recursion(s + 1); /* Do the next char */
}
