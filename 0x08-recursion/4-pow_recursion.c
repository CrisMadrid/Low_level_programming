#include "holberton.h"

/**
 * _pow_recursion - F returns the value of x raised to pw y
 * @x : base
 * @y : exponente
 * Return: .
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
