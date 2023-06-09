#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - it reads a text file and prints it to the PROSIX
 * @filename: the name of the file to read
 * @letters: the number of files to read
 *
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w;
	ssize_t r;
	ssize_t bytes;
	char *buffer;

	bytes = open(filename, O_RDONLY);
	if (bytes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(bytes, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(bytes);
	return (w);
}
