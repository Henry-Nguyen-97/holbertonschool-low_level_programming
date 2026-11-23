#include "main.h"

/* Get string length */
int _strlen_recursion/* For betty */(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
* How it work:
* Walk through "Hi". There are two phases.
* 	Going down: each call pauses on the return line. It can’t finish 1 + ... until the call below gives it a number.
* 		_strlen_recursion("Hi")   ->  return 1 + ???    (waiting)
*  		_strlen_recursion("i")  ->  return 1 + ???    (waiting)
*    		_strlen_recursion("'\0'") ->  return 0          (base case, answers right away)
* 	Coming back up: the deepest call returns 0, and each paused call fills in its ??? and returns in turn.
*		_strlen_recursion("'\0'")   returns 0
*		_strlen_recursion("i")  returns 1 + 0 = 1
*		_strlen_recursion("Hi") returns 1 + 1 = 2
* The first call returns 2, which is the length of "Hi".
*/
