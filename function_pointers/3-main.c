#include "3-calc.h"

/**
* main - performs simple operations from the command line
* @argc: the number of command-line arguments
* @argv: array of the command-line arguments
*
* Return: 0 on success, 98 for a wrong argument count, 99 for an invalid
* operator, 100 for division or modulo by zero
*/
int main(int argc, char *argv[])
{
	int n1, n2;
	char *op;

	/* Check for valid argument counts from command line. program execution, number 1, operator, number 2. 4 total */
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	/* Check for valid operator. The get_op_func() function already check this so just check if it return NULL */
	op = argv[2];
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	/* atoi() convert strings to intergers for operations */
	n2 = atoi(argv[3]);
	/* Check if divide or modular by 0 */
	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	n1 = atoi(argv[1]);
	/* Call the function that would call the operation functions. Then print the result */
	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);
}
