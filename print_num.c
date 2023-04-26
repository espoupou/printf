#include "main.h"

/**
 * print_int - print an integer
 * @params: paramaters to directive
 * @f: flags
 * Return: number of char
 */

int print_int(va_list params, fH *f)
{
	int n = va_arg(params, int);
	int count = 0;

	if (f->space == 1 && f->plus == 0 && n >= 0)
		count += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		count += _putchar('+');
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
 * @f: flags
 * Return: number of char
 */

int print_unsigned(va_list params, fH *f)
{
	UNUSED(*f);
	/* return (_print_int_helper(va_arg(params, unsigned int))); */
	return (_puts(_convert(va_arg(params, unsigned int), 10, 0)));
}

/**
 * print_address - print address
 * @params: paramaters to directive
 * @f: flags
 * Return: number of char
 */

int print_address(va_list params, fH *f)
{

	unsigned long int p = va_arg(params, unsigned long int);

	int count = 0;

	UNUSED(*f);
	if (!p)
		return (_puts("(nil)"));
	count += _puts("0x");
	count += _puts(_convert(p, 16, 1));
	return (count);
}
