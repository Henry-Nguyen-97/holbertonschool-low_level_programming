#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main/**Print number using putchar*/ (void)
{
int num = 0;

while (num <= 9)
{
putchar (num + '0');
putchar (',');
putchar (' ');
num++;
}
putchar ('\n');
return (0);
}
