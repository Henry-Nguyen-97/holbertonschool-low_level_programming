#include "main.h"

char *leet/* Replace some letters with numbers */(char *str)
{
	int input_pos; /* Used to refer to position of input string */
	int array_pos;/* Used to refer to position of letters and numbers arrays string */
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	input_pos = 0; /* Set position to the start of string */

	while (str[input_pos]) /* Loop till end of string. s[i] is the same as s[i] != 0 and s[i] != '\0' */
	{
		array_pos = 0; /* Set/reset position to the start of letters or numbers arrays */
		while (letters[array_pos]) /* Loop till end of letters array */
		{
			if (str[input_pos] == letters[array_pos]) /* If input letter at current position == letter at current position of array */
			{
				str[input_pos] = numbers[array_pos];/* Replace with the number at coresponding position in numbers array */
				break; /* Break out of this inner loop */
			}
			array_pos++; /* Move to next position of the letters/numbers array */
		}
		input_pos++; /* Move to next position of the input string */
	}
	return (str);
}
