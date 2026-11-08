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
			else if (choice == 2) /* Subtraction operation */
			{
				printf ("Choice: 2 - Subtraction\n");
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
				result = (A - B);
				printf ("Result: %f", result);
				continue;
			}
			else if (choice == 3) /* Multiplication operation */
			{
				printf ("Choice: 3 - Multiplication\n");
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
				result = (A * B);
				printf ("Result: %f", result);
				continue;
			}
			else if (choice == 4)
			{
				printf ("Choice: 4 - Division\n");
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
				if (B == 0) /* Check if devider is 0 */
				{
					printf ("Error: division by zero");
					while (getchar() != '\n'); /* Clear input field */
					continue;
				}
				result = (A / B);
				printf ("Result: %f", result);
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
