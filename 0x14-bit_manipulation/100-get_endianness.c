#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int end = 1;
	char *bytes = (char *) &end;

	return (*bytes);
}
