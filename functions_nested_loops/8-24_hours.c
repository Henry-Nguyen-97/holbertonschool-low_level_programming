#include "main.h"

void jack_bauer/*Get first and last digit of number*/(void)
{
int h;
h = 0;

while (h < 24)
{
int m;
m = 0;

while (m < 60)
{
_putchar ('0' + h / 10);
_putchar ('0' + h % 10);
_putchar (':');
_putchar ('0' + m / 10);
_putchar ('0' + m % 10);
_putchar ('\n');
m++;
}
h++;
}
}
