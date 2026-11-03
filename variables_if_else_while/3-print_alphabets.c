#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main/**Print alphabet in lowercase followed by a line*/ (void)
{
char ch = 'a';
char CH = 'A';

while (ch <= 'z')
{
putchar (ch);
ch++;
}
while (CH <= 'Z')
{
putchar (CH);
CH++;
}
putchar ('\n');
return (0);
}
