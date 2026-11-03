#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main/**Print number using putchar*/ (void)
{
int num = 0;

while (num <= 9)
{
if (num < 9)
{
putchar (num + '0');
putchar (',');
putchar (' ');
} else if (num == 9)
{
putchar (57);
putchar ('$');
}
num++;
}
return (0);
}
