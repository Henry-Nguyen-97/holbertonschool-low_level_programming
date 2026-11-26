#include <stdio.h>
#include <stdlib.h>

/**
* main - print program name and all arguments
* @argc: Argument count + program name
* @argv: Argument vectors (arguments's data)
*
* Return: 0 - Success, or 1 - Fail
*/
int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	r = n1 * n2;
	printf("%d\n", r);
	return (0);
}
