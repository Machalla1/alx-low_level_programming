#include "main.h"
/**
 * _strchr - starting part
 * @s: user input
 * @c: user input
 * Return: constantly 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
