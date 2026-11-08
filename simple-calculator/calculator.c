#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main/* Calculator */(void)
{
	int choice;
	int A;
	int B;
	int result;

	printf ("Welcome to simple calculator\n");
	while (1) /* Infinite loop until meet a condition */
		{
			printf /* Print menu */
			(
				"\n"
			"Simple calculator\n"
			"1) Add\n"
			"2) Subtract\n"
			"3) Multiply\n"
			"4) Divide\n"
			"0) Quit\n"
			);
			printf ("Choice: "); /* Ask for input */
			if (scanf ("%d", &choice) != 1) /* If input is not an interger */
			{ /* Reject input */
				printf ("Invalid input");
				while (getchar() != '\n'); /* Clear input field */
				continue;
			}
			if (choice == 0)
			{
				printf ("Quitting. Bye!");
				break;
			}
			else if (choice == 1) /* Addition operation */
			{
				printf ("Choice: 1 - Addition\n");
				printf ("A: ");
				scanf ("%d", &A);
				printf ("B: ");
				scanf ("%d", &B);
				result = A + B;
				printf ("Result: %d", result);
				continue;
			}
			else if (choice >= 2 && choice <= 4)
			{
				printf ("Not implemented");
				continue;
			}
			else
			{
				printf ("Invalid input");
				continue;
			}
		}
	return (0);
}
