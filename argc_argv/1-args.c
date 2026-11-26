#include <stdio.h>

/**
* main - print argument count
* @argc: Argument count + program name
* @argv: Argument vectors (the arguments' data)
*
* Return: 0 - Success
*/
int main(int argc, char *argv[])
{
	(void)argv; /* Mark as unused so no compiler error */
	printf("%d\n", argc - 1); /* argc - 1 because argc also count the program name, we only want the number of arguments */
	return (0);
}
