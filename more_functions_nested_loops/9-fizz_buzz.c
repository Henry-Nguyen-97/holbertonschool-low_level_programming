#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main/*Print 1 to 100*/(void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		/* Replace multiple of 3 & 5 */
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
			n++;
		}
		/* Replace multiple of 3 */
		else if (n % 3 == 0)
		{
			printf("Fizz ");
			n++;
		}
		/* Replace multiple of 5 */
		else if (n % 5 == 0)
		{
			printf("Buzz ");
			n++;
		}
		/* Print the number */
		else
		{
			printf("%d ", n);
			n++;
		}
		printf("\n");
	}
	return (0);
}
