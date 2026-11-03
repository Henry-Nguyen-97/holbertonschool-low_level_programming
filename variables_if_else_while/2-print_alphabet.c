#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main/**Print alphabet in lowercase followed by a line*/ (void)
{
char ch = 'a';

while (ch <= 'z')
{
  putchar (ch);
  putchar(\n);
  ch++;
}
return (0);
}
