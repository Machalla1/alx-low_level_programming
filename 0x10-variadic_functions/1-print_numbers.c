#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - number to be printed
 * @separator: string needed to be printed between numbers.
 * @n: integers to be passed to the function.
 * @...:  numbers of variables to be printed.
 */


void print_numbers(const char *separator, const unsigned int n, ...)
	{
		va_list nums;
		unsigned int index;


		va_start(nums, n);


		for (index = 0; index < n; index++)
		{
			printf("%i", va_arg(nums, int));


			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(nums);
	}

