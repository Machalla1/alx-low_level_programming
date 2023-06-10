#include "main.h"

/**
 * _isdigit - verifies if a character is a numeral (0 to 9)
 * @c: int to be verified
 * Return: 1 if c is a numeral, otherwise returns 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
