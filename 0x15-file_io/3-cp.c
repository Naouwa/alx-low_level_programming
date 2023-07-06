#include "main.h"
#define BUF_SIZE 1024
/**
 * main - program
 * @argc: number of arguments
 * @argv: pointer to the array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int l0, l1, result0, result1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);

	l1 = open(argv[1], O_RDONLY);
	error_98(l1, buffer, argv[1]);
	l0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(l0, buffer, argv[2]);
	do {
		result0 = read(l1, buffer, BUF_SIZE);
		if (result0 == 0)
			break;
		error_98(result0, buffer, argv[1]);
		result1 = write(l0, buffer, result0);
		error_99(result1, buffer, argv[2]);
	} while (result1 >= BUF_SIZE);
	result0 = close(l0);
	error_100(result0, buffer);
	result0 = close(l1);
	error_100(result0, buffer);
	free(buffer);
	return (0);
}
/**
 * error_98 - checks the error 99
 * @l0: value to check
 * @buffer: buffer
 * @argv: argument
 */
void error_99(int l0, char *buffer, char *argv)
{
	if (l0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * error_100 - checks error 100
 * @l0: value to check
 * @buffer: buffer
 */
void error_100(int l0, char *buffer)
{
	if (l0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", l0);
		free(buffer);
		exit(100);
	}
}
