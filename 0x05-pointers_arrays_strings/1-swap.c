#include "holberton.h"
/**
 * swap_int - F that swaps the value of two int.
 * @a: int 1
 * @b: int 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
