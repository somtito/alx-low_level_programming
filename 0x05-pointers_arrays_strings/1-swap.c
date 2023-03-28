#include "main.h"
/**
 * swap_int - a function that swaps value
 * @a: integer to swap
 * @b: integers for swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
