#include "main.h"

/**
 * print_char - print a char
 * @params: paramaters to directive
 * Return: number of char
 */

int print_char (va_list params)
{
	return (_putchar(va_arg(params, int)));
}

/**
 * print_string - print a string
 * @params : parameters to directive
 * Return: number of char
 */

int print_string(va_list params)
{
	return (_puts(va_arg(params, char *)));
}
