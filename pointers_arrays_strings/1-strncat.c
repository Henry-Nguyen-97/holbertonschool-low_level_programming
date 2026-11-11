#include "main.h"

char *_strncat/* Append n byte(s) of string from src to dest */(char *dest, char *src, int n)
{
	/* Declaring a var to compare to n
	* because can't compare pointer to interger */
	int index;
	/* index would serve as replacement for position at src */

	index = 0;

	/* Save start position of dest */
	char *dest_start = dest;
	
	/* While data at current position at dest is not null */
	while (*dest != '\0')
	{
		/* Move to next position */
		dest++;
	}

	/* While index < n
	* And data at current position at src is not null */
	while (index < n && *src != '\0')
	{
		/* Copy data from src to dest */
		*dest = *src;
		/* Move to next position of each */
		dest++;
		src++;
		/* Increase index by 1 */
		index++;
	}
	/* Put a null at the end of dest when finish */
	*dest = '\0';
    return (dest_start);
}
