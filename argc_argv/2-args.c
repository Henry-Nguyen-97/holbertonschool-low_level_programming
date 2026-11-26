#include <stdio.h>

/**
* main - print program name and all arguments
* @argc: Argument count + program name
* @argv: Argument vectors (arguments's data)
* @i: index
*
* Return: 0 - Success
*/
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
