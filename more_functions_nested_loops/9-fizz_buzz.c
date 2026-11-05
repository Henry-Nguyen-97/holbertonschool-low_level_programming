#include <stdio.h>
#include <stlib.h>
#include <unistd.h>

int main (void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		printf("%d ", n);
		n++;
	}
	return (0);
}
