#include "main.h"
/**
 * flip_bits - it returns the number of bits that need to be fliped
 * @n: first number
 * @m: second number
 *
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int valResult = n ^ m;

	while (valResult != 0)
	{
		count += valResult & 1;
		valResult >>= 1;
	}
	return (count);
}
