#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main/* Calculator */(void)
{
	int input;
	printf ("Welcome to simple calculator\n");
	while (1)
		{
			printf
			(
				"\n"
			"Simple calculator\n"
			"1) Add\n"
			"2) Subtract\n"
			"3) Multiply\n"
			"4) Divide\n"
			"0) Quit\n"
			);
			printf ("Input: ");
			if (scanf ("%d", &input) != 1)
			{
				printf ("Invalid, please enter a number between 1 and 4");
				while (getchar() != '\n');
				continue;
			}
			if (input == 0)
			{
				printf ("Quitting. Bye!");
				break;
			}
			else if (input >= 1 && input <= 4)
			{
				printf ("Not implemented");
				continue;
			}
			else
			{
				printf ("Invalid, please enter a number between 1 and 4");
				continue;
			}
		}
	return (0);
}
