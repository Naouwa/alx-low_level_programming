#include "main.h"
/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the memory to be filled.
 * @b: Character to fill the memory with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
