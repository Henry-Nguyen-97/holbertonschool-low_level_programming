#include "main.h"

char *_strcat/* Append 1 string to another */(char *dest, char *src)
{
	/* Save start position of dest */
	char *dest_start = dest;
	/* While data at current position at dest is not null */
	while (*dest != '\0')
	{
		/* Move to next position */
		dest++;
	}

	/* While data at current position at src is not null */
	while (*src != '\0')
	{
		/* Copy data from src to dest */
		*dest = *src;
		/* Move to next position of each */
		dest++;
		src++;
	}
	/* Put a null at the end of dest when finish */
	*dest = '\0';
	/* Return dest from the saved start position */
	return (dest_start);
}
