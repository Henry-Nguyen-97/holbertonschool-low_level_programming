#include "main.h"

/* Print string in reverse */
void _print_rev_recursion/* For betty */(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1); /* Calling the function before _putchar() put _putchar() on pause to do latter in reverse when if condition is met */
	_putchar(*s); /* When on pause, it still remember its' data, just not called yet */
}
