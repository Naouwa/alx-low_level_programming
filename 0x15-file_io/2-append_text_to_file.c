#include "main.h"
/**
 * append_text_to_file - it appends text at the end of a file
 * @filename: the file to create
 * @text_content: the text to write
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (w == -1 || o == -1)
		return (-1);

	close(o);

	return (1);
}
