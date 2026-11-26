#include <stdlib.h>
#include <stdio.h>

/**
* is_num - check if input is an int
* @s: The input
*
* Return: 0 if input is an int, 1 if not
*/
int is_num(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
* main - Print sum of all arguments
* @argc: Argument count + program name
* @argv: The arguments
*
* Return: 0 and print result if success
* 0 and print '0' if no argument is passed
* 1 and print "Error" if there is an invalid number
*/
int main(int argc, char *argv[])
{
	int i, r, n;

	if (argc < 2) /* This block can be removed. If there is no argument, argc = 1. And i = 1 so while (i < argc) is false and the loop never run. r = 0 mean the function would print 0 and exit */
	{
		printf("0\n");
		return (0);
	}

	i = 1;
	r = 0;
	while (i < argc)
	{
		if (is_num(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}

		n = atoi(argv[i]);
		r += n;
		i++;
	}
	printf("%d\n", r);
	return (0);
}
