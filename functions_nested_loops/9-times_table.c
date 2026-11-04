#include "main.h"

void times_table(void)
{
  int r;
  r = 0;
  while (r < 81)
    {
      int n1;
      n1 = 0;
      while (n1 <= 9)
        {
          int n2;
          n2 = 0;
          while (n2 <= 9)
            {
              r = n1 * n2;
              if (r >= 10 && n2 != 9)
              {
                _putchar ('0' + r / 10);
                _putchar ('0' + r % 10);
                _putchar (',');
                _putchar (' ');
              }
              else if (r >= 10 && n2 == 9)
              {
                _putchar ('0' + r / 10);
                _putchar ('0' + r % 10);
              }
              else if (r < 10 && n2 != 9)
              {
                _putchar ('0' + r);
                _putchar (',');
                _putchar (' ');
                _putchar (' ');
              }
              else if (r < 10 && n2 == 9)
              {
                _putchar ('0' + r);
              }
              n2++;
            }
          n1++;
          _putchar ('\n');
        }
    }
}
