#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @a: parameter to be checked
 *
 * Return: always a
 */

int _abs(int a)

{

	int k = a;

	int absvalue;


if (k < 0)
{

	k = k * (-1);

}

	absvalue = k;

	return (absvalue);

}

