#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @n: function copies
 *
 * @src: memory area to be copied from
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
