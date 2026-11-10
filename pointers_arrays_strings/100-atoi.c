#include "main.h"

int _atoi/* Convert string in array into int numbers */(char *s)
{
	int position;
	int sign;

	position = 0;

	/*
	* While data at position is space or anything from ASCII table 9 to 13
	* (\t, \n, \v, \f, \r)
	* Skip that data
	*/
	while (s[position] == ' ' || (s[position] >= 9 && s[position] <= 13))
	{
		position++;
	}

	sign = 1;

	/*
	* If data at position is a negative sign, set variable to -1
	* Else keep variable as 1
	* Move to next position
	*/
	if (s[position] == '-')
	{
		sign = -1;
		position++;
	}
	else
	{
		position++;
	}
}
