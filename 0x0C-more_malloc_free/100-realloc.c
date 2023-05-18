#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to allocated memory
 * @old_size: Size in bytes
 * @new_size: Size in bytes
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newp = malloc(new_size);

		if (newp == NULL)
			return (NULL);

		return (newp);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	newp = malloc(new_size);

	if (newp == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
	{
		newp[a] = ((char *) ptr)[a];
	}

	free(ptr);
	return (newp);
}
