#include "main.h"
/**
 * _memset - populate a section of memory with a particular value
 * @s: initial memory location for the block to be filled
 * @b: the targeted value
 * @n: quantity of bytes to be modified
 *
 * Return: update array with desired value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

