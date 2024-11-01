#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Pointer to the integer to swap
 * @b: Pointer to the another integer to swap
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
