# include "main.h"

int print_last_digit/*Find last digit*/(int n)
{
n = n % 10;
if (n < 0)
{
n = -n;
}
_putchar (n + '0');
_putchar ('\n');
return (n);
}
