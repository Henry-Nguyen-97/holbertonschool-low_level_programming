#include "main.h"

char *leet/* Replace some letters with numbers */(char *str)
{
	int input_pos;
	int array_pos;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	input_pos = 0;

	while (str[input_pos])
	{
		array_pos = 0;
		while (letters[array_pos])
		{
			if (str[input_pos] == letters[array_pos])
			{
				str[input_pos] = numbers[array_pos];
				break;
			}
			array_pos++;
		}
		input_pos++;
	}
	return (str);
}
