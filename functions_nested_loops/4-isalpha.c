#include "main.h"
/*This is header source file, not main file*/

int _islower/*return value '0' spaces on from '1' or '0'*/(int c)
{
if (c >= 'a' && c <= 'z')
{
return ('1' - '0');
}
else if (c >= 'A' && c <= 'Z')
{
return ('1' - '0');
}
else
{
return ('0' - '0');
}
}
