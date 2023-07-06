#include "main.h"
/**
 * get_bit - it returns the valude of a bit at a given index
 * @n: The index's number
 * @index: The bit to get
 *
 * Return: The value of the bit at the index, or -1 if failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= sizeof(n) * 8)
		return (-1);

	value = (n >> index) & 1;
	return (value);
}
