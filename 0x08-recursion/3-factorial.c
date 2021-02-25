#include "holberton.h"
#include <stdio.h>

/**
 * factorial - F returns the factorial of a given number
 * @n : integer
 * Return: n's factorial, OR -1 when n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
