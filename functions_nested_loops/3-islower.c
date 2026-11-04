#include "main.h"

int _islower/*return value '0' space on ASCII from '1' or '0' depending on the value of c*/(int c)
{
if (c >= 'a' && c <= 'z')
{
return ('1' - '0');
}
else
{
return ('0' - '0');
} 
}
