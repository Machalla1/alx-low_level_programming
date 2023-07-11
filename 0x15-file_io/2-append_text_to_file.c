#include "main.h"

/**
 * append_text_to_file - input text at the end of a file.
 * @filename: The pointer to the name of the file.
 * @text_content: A string to be added to the end of the file.
 *
 * Return: - -1 If the function fails or filename is NULL
 *         If the file does not exist the user lacks write permissions - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, m, pen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (pen = 0; text_content[pen];)
			pen++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	m = write(p, text_content, pen);

	if (p == -1 || m == -1)
		return (-1);

	close(p);

	return (1);
}

