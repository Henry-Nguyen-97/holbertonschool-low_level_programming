#include "main.h"

void rev_string/* Reverse a string */(char *s)
{
        int length;
        int lpos; /* left position */
        int rpos; /* right position */
        int memory;

	length = 0;

	while (s[length] != '\0') /* Find length */
	{
		length++;
	}

	lpos = 0; /* Set left position to 1st position */
	rpos = length - 1; /* Set right position to 2nd last position avoid null*/
	memory = 0;

        while (lpos < rpos) /* While left position is left of right position */
        {
        	memory = s[lpos]; /* Save data at left position to memory */
        	s[lpos] = s[rpos]; /* Save data at right position to left position */
        	s[rpos] = memory; /* Save data from memory to right position */
        	lpos++; /* Move left position 1 to the right */
        	rpos--; /* Move right position 1 to the left */
        }
}
