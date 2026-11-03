#include <unistd.h>
#include <stdio.h>
#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
  print_alphabet();
  return (0);
}
int main(void)
{
    print_alphabet_x10();
    return (0);
}
