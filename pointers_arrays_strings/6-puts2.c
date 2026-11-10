#include "main.h"

void puts2/* Print every other char */(char *str)
{
        int length;
        int position;

        length = 0;

        while (str[length] != '\0') /* Find length */
        {
                length++;
        }

        position = 0;

        while (position <= length)
        {
                _putchar (str[position]); /* Print data at position */
                position += 2; /* Increase position by 2*/
        }
}
