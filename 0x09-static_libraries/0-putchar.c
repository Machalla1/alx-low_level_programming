#include <unistd.h>

/**
 * _putchar - inscribes C character to stdout
 * @c: will be the character to print
 * Return: On success 1.
 *If error, -1 will be returned, and errno is appropriately set
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}
