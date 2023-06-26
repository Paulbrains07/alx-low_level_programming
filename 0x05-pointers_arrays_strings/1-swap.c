#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: swap_int - swaps the value of the two intergers.
 * @a: The first interger to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
	/* the function that swaps the values of two integers. */
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
