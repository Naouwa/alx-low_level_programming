#include "main.h"
/**
 * print_binary - it prints the binary representation of a number
 * @n: The number to be printed in binary
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int actual;
	int i, binary = 0;

	for (i = 63; i >= 0; i--)
	{
		actual = n >> i;

		if (actual & 1)
		{
			binary++;
			_putchar('1');
		}
		else if (binary)
			_putchar('0');
	}
	if (!binary)
		_putchar('0');
}
