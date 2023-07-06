#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number to convert
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		result = (result * 2) + (*b++ - '0');
	}
	return (result);
}
