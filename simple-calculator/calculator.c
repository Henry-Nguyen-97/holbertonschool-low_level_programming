#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main/* Calculator */(void)
{
	int choice;
	float A;
	float B;
	float result;

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
				if (scanf ("%f", &A) != 1) /* If input is not an float */
				{ /* Reject input */
					printf ("Invalid input");
					while (getchar() != '\n'); /* Clear input field */
					continue;
				}
				printf ("B: ");
				if (scanf ("%f", &B) != 1) /* If input is not an float */
				{ /* Reject input */
					printf ("Invalid input");
					while (getchar() != '\n'); /* Clear input field */
					continue;
				}
				result = (A + B);
				printf ("Result: %f", result);
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
