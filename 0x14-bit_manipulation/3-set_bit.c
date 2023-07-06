#include "main.h"
/**
 * set_bit - it sets the value of a bit to 1 at a given index
 * @n: the index's number
 * @index: The bit to set
 * Return: 1 success, -1 failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
