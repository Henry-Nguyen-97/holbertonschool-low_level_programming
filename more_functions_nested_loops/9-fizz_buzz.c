#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
			n++;
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
			n++;
		}
		else
		{
			printf("%d ", n);
			n++;
		}
	}
	return (0);
}
