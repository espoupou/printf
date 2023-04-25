#include "main.h"

/**
 * print_bin - convert and print number in bin
 * @params: paramaters to directive
 * Return: number of char
 */

int print_bin(va_list params)
{
	return (_puts(convert(va_arg(params, unsigned int), 2, 0)));
}
