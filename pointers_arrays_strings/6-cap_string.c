#include "main.h"

int is_sep/* Chect for seperator */(char c)
{
	/* Declare an array to contain all seperators */
	char sep[] = " \t\n,;.!?\"(){}";
	/* Declare an interger to serve as position in array */
	int i;

	i = 0;

	/* Loop while data at position i is not null */
	while (sep[i] != '\0')
	{
		/* If input to c is the same as data at position i */ 
		if (c == sep[i])
		{
			return (1);
		}
		/* If not move to next position until reaching '\0' */
		i++;
	}
	/* If reach end and still not match, return 0 */
	return (0);
}

char *cap_string/* Make words start with a cap letter */(char *str)
{
	/* Declare an interger to serve as position in array *
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* If data at i is 0 (null) or if the prior position data is a seperator */
			if (i == 0 || is_sep(str[i - 1]))
			{
				/* Make letter upper case using the ASCII data value method */
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
