#include "main.h"

void print_alphabet/*print alphabet 10 times*/(void)
{

char l;
int t;
/*Loop 10 times*/
for (t = 1; t <= 10; t++)
{
/*Print alphabet nested in loop 10 times*/
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
