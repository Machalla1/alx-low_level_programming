#include "main.h"

/**
 *  _isalpha - function that check for alphabets
 *
 *  @c: parameter to be checked
 *
 *  Return: 1 if it is an alphabet
 *  and return 0 otherwise
 */


	int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
