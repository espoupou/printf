#include "main.h"

/**
 * print_int - print an integer
 * @params: paramaters to directive
 * Return: number of char
 */

int print_int(va_list params)
{
	int n = va_arg(params, int);
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}

	return (count + _print_int_helper(n));
}

/**
 * print_unsigned - print an unsigned integer
 * @params: paramaters to directive
 * Return: number of char
 */

int print_unsigned(va_list params)
{
	/* return (_print_int_helper(va_arg(params, unsigned int))); */
	return (_puts(_convert(va_arg(params, unsigned int), 10, 0)));
}
