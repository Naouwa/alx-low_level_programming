#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *e;

	while (--argc)
	{
		for (e = argv[argc]; *e; e++)
			if (*e < '0' || *e > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
