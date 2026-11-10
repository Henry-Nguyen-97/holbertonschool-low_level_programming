#include "main.h"

int _atoi/* Convert string in array into int numbers */(char *s)
{ /* Only get the first encounterd numbers */
	int position;
	int sign;
	int number;

	position = 0;
	sign = 1;

	/* Loop until end or finding a starting number */
	while (s[position] != '\0')
	{
		if (s[position] == '-')
		{
			/* Flip sign whenever encounter '-' */
			sign *= -1;
		}
		else if (s[position] >= '0' && s[position] <= '9')
		{
			/* Break out of loop when found a number */
			break;
		}
		position++;
	}

	/* If reach the end and no number found, return 0 */
	if (s[position] == '\0')
	{
		return (0);
	}
	else /* Else get the number */
	{
		number = 0;
		/*
		* While the current data and next are both numbers
		* Get the number then move to the next position
		*/
		while (s[position] >= '0' && s[position] <= '9' &&
			s[position + 1] >= '0' && s[position + 1] <= '9')
		{
			number = (number * 10) + (s[position] - '0');
			position++;
		}

		/* Get the last number */
		number = (number * 10) + (s[position] - '0');
		return (number * sign);
	}
}
