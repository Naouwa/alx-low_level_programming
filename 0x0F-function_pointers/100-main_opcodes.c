#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *ptr;
	int b, i;

	if (argc != 2)
	{
		printf("ERROR\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("ERROR\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
