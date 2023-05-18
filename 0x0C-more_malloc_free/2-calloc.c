#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: seze of element
 *
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int a = 0, b = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	ptr = malloc(b);

	if (ptr == NULL)
		return (NULL);
	while (a < b)
	{
		ptr[a] = 0;
		a++;
	}

	return (ptr);
}
