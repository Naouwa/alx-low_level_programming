#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int buffer, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	buffer = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(buffer, text_content, len);

	if (buffer == -1 || w == -1)
		return (-1);

	close(buffer);

	return (1);
}
