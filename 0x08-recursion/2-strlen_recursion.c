#include "holberton.h"
/**
 *_strlen_recursion - F returns the lennght of a string
 *@s: string
 * Return: lentgh of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
