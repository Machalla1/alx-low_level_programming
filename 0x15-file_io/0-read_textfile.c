#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this interprete text file print to STDOUT.
 * @filename: this is the text file to be  read
 * @letters: this is all the  number of letters to be read
 * Return: w- real figure of bytes read and printed
 *        0 when filename is NULL or have a failed function.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t p;
	ssize_t m;
	ssize_t b;

	p = open(filename, O_RDONLY);
	if (p == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(p, buf, letters);
	m = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(p);
	return (m);
}

