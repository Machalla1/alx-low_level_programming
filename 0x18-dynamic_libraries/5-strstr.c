#include "main.h"

/**
  * _strstr - This locates a substring
  * @haystack: this is the string to search
  * @needle: this the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
