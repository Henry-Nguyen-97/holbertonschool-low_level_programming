#include "main.h"

int _atoi/* Convert string in array into int numbers */(char *s)
{
	int position;
	int sign;
	int number;

	position = 0;
	/*
	* While data at position is not a number
	* or a numeric sign
	* or null
	* Move to next position
	*/
	while ((s[position] < '0' || s[position] > '9') &&
		s[position] != '+' &&
		s[position] != '-' &&
		s[position] != '\0')
	{
		position++;
	}

	sign = 1;
	/*
	* If all data at positions proceed a number combine to a negative sign, set variable to -1
	* Else keep variable as 1
	* Move to next position
	*/
	while (s[position] == '-' || s[position] == '+')
	{
		if (s[position] == '-')
		{
			sign = -1;
			position++;
		}
		else if (s[position] == '+')
		{
			position++;
		}
	}

	number = 0;
	while (s[position] >= '0' && s[position] <= '9')
	{
		number = (number * 10) + (s[position] - '0');
		position++;
	}
	return (number * sign);
}
