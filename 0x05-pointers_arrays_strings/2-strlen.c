#include "holberton.h"

/**
 *_strlen - F that returns the length of string.
 *@s: string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int lenghS;

	for (lenghS = 0; s[lenghS] != '\0'; lenghS++)
	{}
	return (lenghS);
}
