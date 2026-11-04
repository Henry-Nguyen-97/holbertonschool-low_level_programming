#include "main.h"

void times_table/*Print time table*/(void)
{
int r;
r = 0;
while /*While result < 81*/(r < 81)
{
int n1;
n1 = 0;
while /*While 1st number <= 9*/(n1 <= 9)
{
int n2;
n2 = 0;
while /*While 2nd number <= 9*/(n2 <= 9)
{
r = n1 *n2;
if /*If result > 10, print first digit and last digit*/(r >= 10)
{
_putchar ('0' + r / 10);
_putchar ('0' + r % 10);
_putchar (',');
_putchar (' ');
}
else /*Else print the result and add 2 spaces behind comma*/
{
_putchar ('0' + r);
_putchar (',');
_putchar (' ');
_putchar (' ');
}
n2++;
}
n1++;
_putchar ('\n');
}
}
}
