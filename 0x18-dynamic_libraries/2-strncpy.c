#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to be used
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
