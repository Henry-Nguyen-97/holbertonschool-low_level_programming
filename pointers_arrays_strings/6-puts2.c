#include "main.h"

void puts2/* Print every other char */(char *str)
{
        int length;
        int position;

        length = 0;

        while (str[length] =! '\0') /* Find length */
        {
                length++;
        }

        position = 0;

        while (position <= length)
        {
                if (position % 2 != 0) /* If position is odd */
                {
                        _putchar (str[position]); /* Print data at position */
                        position++;
                }
                else /* Else don't print */
                {
                        position++;
                }
        }
}
