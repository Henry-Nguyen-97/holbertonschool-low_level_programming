#include <stdio.h>

/**
* main - print program name
* @argc: Argument count + program name
* @argv: Argument vectors (the arguments' data)
*
* Return: 0 - Success
*/
int main(int argc, char *argv[])
{
	(void)argc; /* Mark as unused so no compiler error */
	printf("%s\n", argv[0]);
	return (0);
}
