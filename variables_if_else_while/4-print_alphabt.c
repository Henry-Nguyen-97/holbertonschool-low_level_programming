#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main/**Print alphabet in lowercase followed by a line*/ (void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'q' && ch != 'e')
{
putchar (ch);
}
ch++;
}
putchar ('\n');
return (0);
}
