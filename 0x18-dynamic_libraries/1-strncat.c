#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, c2;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	c2 = 0;
	while (c2 < n && src[c2] != '\0')
	{
		dest[c] = src[c2];
		c++;
		c2++;
	}
	dest[c] = '\0';
	return (dest);
}
