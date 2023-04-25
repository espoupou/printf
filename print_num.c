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
 * _print_int_helper - helper for print_int
 * @n: numer to print
 * Return: number of char
 */

int _print_int_helper(int n)
{
	int count = 0;

	if (n / 10)
		count += _print_int_helper(n / 10);

	return (count + _putchar((n % 10) + '0'));
}
