#include "main.h"
/**
 * _strcat - concatenate two string
 * @dest: string
 * @src: string to add
 *
 * Return: the resulting string
 */
char *_strcat(char *dest, char *src);
{
	int i, j;

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')

		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
