#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: A pointer to the memory area.
 * @src: Source buffer to copy characters from.
 * @n: Number of bytes to copy from @src.
 *
 * Return: Copies menory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}

