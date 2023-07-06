#include "main.h"
/**
 * get_endianness - It checks the endianness
 *
 * Return: 0 if big endianness, 1 if little endianness
 */
int get_endianness(void)
{
	unsigned int end = 1;
	char *bytes = (char *) &end;

	return (*bytes);
}
