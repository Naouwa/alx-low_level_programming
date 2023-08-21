#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	c2 = 0;
	while (src[c2] != '\0')
	{
		dest[c] = src[c2];
		c++;
		c2++;
	}

	dest[c] = '\0';
	return (dest);
}
