#include "main.h"

void print_to_98/* Print to 98 */(int n)
{
while (n != 98)
{
int num = n;

/* Print minus sign for negative numbers */
if (num < 0)
{
_putchar('-');
num = -num;
}

/* Print digits based on number magnitude */
if (num >= 100)
{
_putchar('0' + (num / 100));
_putchar('0' + ((num / 10) % 10));
_putchar('0' + (num % 10));
}
else if (num >= 10)
{
_putchar('0' + (num / 10));
_putchar('0' + (num % 10));
}
else
{
_putchar('0' + num);
}

/* Trailing comma and space */
_putchar(',');
_putchar(' ');

/* Move closer to 98 */
if (n < 98)
            n++;
else
n--;
}

/* Print the final 98 followed by a newline */
_putchar('9');
_putchar('8');
_putchar('\n');
}
