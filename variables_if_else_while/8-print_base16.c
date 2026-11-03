#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main/**Print alphabet in lowercase followed by a line*/ (void)
{
int num = 0;
char ch = 'a';

while (num <= 9)
{
putchar (num + '0');
num++;
}
while (ch <= 'f')
{
putchar (ch);
ch++;
}
putchar ('\n');
return (0);
}
