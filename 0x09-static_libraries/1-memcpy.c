#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: memoery its stored
 * @src: memory where copied
 * @n: number of byte
 *
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{	dest[r] = src[r];
			n--;
	}
	return (dest);
}
