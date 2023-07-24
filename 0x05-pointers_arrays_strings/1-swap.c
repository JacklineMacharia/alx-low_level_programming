#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: integer value 1
 * @b: integer value 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
