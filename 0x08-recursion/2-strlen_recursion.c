#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to b measured
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
