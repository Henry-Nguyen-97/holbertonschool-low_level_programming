#include "main.h"

char *_strcpy/* Copy data from 1 pointer's target to another */(char *dest, char *src)
{
        int position;

        position = 0;

        while (src[position] != '\0') /* While data at current position of src is not null */
        {
                dest[position] = src[position]; /* Set data at current position of dest to data at current position of src */
                position++; /* Next position */
        }
        dest[postion] = '\0'; /* Set the current position of dest to null */
}
