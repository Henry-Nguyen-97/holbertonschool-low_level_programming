#include "main.h"

char *_strncpy/* Copy string from src to dest */(char *dest, char *src, int n)
{
	/*
	* Declaring a var to compare to n
	* because can't compare pointer to interger
	*/
	int index;
	/*
	* index would serve as replacement for position at src & dest
	* So that the pointers can remain pointing at the start of both
	* And we don't have to move pointers back to start manually
	*/

	index = 0;

	/*
	* While index < n
	* And data at current position at src is not null
	*/
	while (index < n && src[index] != '\0')
	{
		/* Copy data from src to dest */
		dest[index] = src[index];
		/* Increase index by 1 */
		index++;
	}

	/* Pad out the remainder with null at the end */
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
