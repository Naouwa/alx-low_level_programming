#include "main.h"
/**
 * flip_bits - eturns the number of bits that needs to be fliped
 * @n: first number
 * @m:second number
 *
 * Return: the number of bits
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
