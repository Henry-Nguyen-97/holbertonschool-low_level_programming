#include "main.h"

int is_sep(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	i = 0;

	while (sep[i] != '\0')
	{
		if (c == sep[i])
		{
			return (1);
			i++;
		}
		else
		{
			return (0);
		}
	}
}

char *cap_string/* Make every word start with a cap letter */(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || is_sep(str[i - 1]))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
