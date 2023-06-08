#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: index's number
 * @index: the bit to set
 * Return: 1 success, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
