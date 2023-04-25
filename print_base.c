#include "main.h"

/**
 * print_bin - convert and print number in bin
 * @params: paramaters to directive
 * Return: number of char
 */

int print_bin(va_list params)
{
	return (_puts(_convert(va_arg(params, unsigned int), 2, 0)));
}

/**
 * print_oct - convert & print number in oct
 * @params: paramaters to directive
 * Return: number of char
 */

int print_oct(va_list params)
{
	return (_puts(_convert(va_arg(params, unsigned int), 8, 0)));
}

/**
 * print_hex - convert & print number in hex lowercase
 * @params: paramaters to directive
 * Return: number of char
 */

int print_hex(va_list params)
{
	return (_puts(_convert(va_arg(params, unsigned int), 16, 1)));
}

/**
 * print_HEX - convert & print number in HEX uppercase
 * @params: paramaters to directive
 * Return: number of char
 */

int print_HEX(va_list params)
{
	return (_puts(_convert(va_arg(params, unsigned int), 16, 0)));
}
