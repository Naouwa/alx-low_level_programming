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
	char *s;
	unsigned int a = 0, b = 0, s1_length = 0, s2_length = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)

	s = malloc(s1_length + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		s[a] = s1[a];

	for (b = 0; b < n; b++)
	{
		s[a] = s2[b];
		a++;
	}
	s[a] = '\0';
	return (s);
}
