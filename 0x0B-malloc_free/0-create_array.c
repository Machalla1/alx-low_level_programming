#include "main.h"
#include <stdlib.h>
/**
 * array - Generate an array with a specified size and allocate character 'c' to each element.
 * @size: magnitude of array
 * @c: char to designate
 * Interpretation: Generate an array with a specified magnitude and allocate the character "c" to each element.
 * Return: A reference to an array, which is set to NULL if the operation fails.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int m;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		str[m] = c;
	return (str);
}
