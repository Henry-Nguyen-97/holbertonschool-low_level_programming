#include "main.h"

void times_table/*Print 9 times table*/(void)
{
int row, col, product;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
product = row * col;

if (col == 0)
{
_putchar('0' + product);
}
else
{
_putchar(',');
_putchar(' ');

/* If product is a single digit, print an extra padding space */
if (product < 10)
{
_putchar(' ');
_putchar('0' + product);
}
else
{
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
}
}
/*trailing newline*/
_putchar('\n');
}
}
