#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: int number
 * @b: int number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
