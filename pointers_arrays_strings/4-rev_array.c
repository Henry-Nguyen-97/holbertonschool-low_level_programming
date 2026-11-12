#include "main.h"

void reverse_array/* reverse an array */(int *a, int n)
{
	int t; /* temp memory */
	int i; /* Element position */

	t = 0;
	/* Set position to the last position */
	i = n - 1;
	/*
	* If n is 10 there are 10 elements at position from 0 to 9.
	* So last position would be 9 (n-1) and not 10
	*/

	/* While not pass the middle position element */
	while (i > (n / 2))
	{
		/* Save element at current position to temp memory */
		t = a[i];
		/* Get element from the appropriate position and save to current position.
		* If current is last, get 1st. If current is 2nd last, get 2nd, etc.
		*/
		a[i] = a[(n - i - 1)];
		/* Then save element from temp memory to where we just get the element from */
		a[n - i - 1] = t;
		/* Move 1 position toward the start */
		i--;
	}
}
