#include "main.h"
#include <unistd.h>
/**
 * _putchar - this writes the character c to stdout
 * @c: This is the  character to print
 *
 * Return: if successful return 1.
 * if error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
