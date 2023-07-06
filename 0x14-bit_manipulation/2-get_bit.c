#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: index's number
 * @index: the bit to get
 *
 * Return: the value of the bit at index, or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= sizeof(n) * 8)
		return (-1);

	value = (n >> index) & 1;
	return (value);
}
