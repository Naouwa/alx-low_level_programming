#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes to concatenate
 * Return: Pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a = 0, b = 0, s1_length = 0, s2_length = 0;

	while (s1 && s1[s1_length])
		s1_length++;
	while (s2 && s2[s2_length])
		s2_length++;

	if (n < s2_length)
		str = malloc(sizeof(char) * (s1_length + n + 1));
	else
		str = malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (!str)
		return (NULL);

	while (a < s1_length)
	{
		str[a] = s1[a];
		a++;
	}

	while (n < s2_length && a < (s1_length + n))
		str[a++] = s2[b++];

	while (n >= s2_length && a < (s1_length + s2_length))
		str[a++] = s2[b++];

	str[a] = '\0';

	return (str);
}
