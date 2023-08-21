#include "main.h"
/**
 * _strlen - This finds the length of a string
 * @s: this is the pointer to the string to check
 * Return: void
*/


int _strlen(char *s)
{
int count = 0;
while (s[count])
	count++;

return (count);
}
