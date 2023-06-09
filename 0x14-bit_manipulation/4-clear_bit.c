#include "main.h"
/**
 * clear_bit - It sets the value of a bit to 0
 * @n: The pointer to the index's number
 * @index: The index of the bit to clear
 *
 * Return: 1 success, -1 error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
