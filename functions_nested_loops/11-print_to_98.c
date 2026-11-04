#include "main.h"

void print_to_98(int n)
{
    if (n < 98)
    {
        while (n <= 98)
        {
            if (n < 10)
            {
                _putchar ('0' + n);
                _putchar (',');
                _putchar (' ');
            }
            else
            {
                _putchar ('0' + n / 10);
                _putchar ('0' + n % 10);
                _putchar (',');
                _putchar (' ');
            }
            n++;
        }
        _putchar ('\n');
    }
    else if (n > 98)
    {
        while (n >=98)
        {
            if (n >= 100)
            {
                _putchar ('0' + n /100);
                _putchar ('0' + (n / 10) % 10);
                _putchar ('0' + n % 10);
                _putchar (',');
                _putchar (' ');
                 n--;
            }
            else
            {
                _putchar ('0' + n / 10);
                _putchar ('0' + n % 10);
                _putchar (',');
                _putchar (' ');
                n--;
            }
            
        }
        _putchar ('\n');
    }
    else if (n == 98)
    {
        _putchar ('0' + n / 10);
        _putchar ('0' + n % 10);
    }
    
    
}
