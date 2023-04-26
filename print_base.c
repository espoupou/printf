#include "main.h"

/**
 * print_bin - convert and print number in bin
 * @params: paramaters to directive
 * @f: flags
 * Return: number of char
 */

int print_bin(va_list params, fH *f)
{
	UNUSED(*f);
	return (_puts(_convert(va_arg(params, unsigned int), 2, 0)));
}

/**
 * print_oct - convert & print number in oct
 * @params: paramaters to directive
 * @f: flags
 * Return: number of char
 */

int print_oct(va_list params, fH *f)
{
	unsigned int num = va_arg(params, unsigned int);
	char *str = _convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);

	return (count);
}

/**
 * print_hex - convert & print number in hex lowercase
 * @params: paramaters to directive
 * @f: flags
 * Return: number of char
 */

int print_hex(va_list params, fH *f)
{
	unsigned int num = va_arg(params, unsigned int);
	char *str = _convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);

	return (count);
}

/**
 * print_HEX - convert & print number in HEX uppercase
 * @params: paramaters to directive
 * @f: flags
 * Return: number of char
 */

int print_HEX(va_list params, fH *f)
{
	unsigned int num = va_arg(params, unsigned int);
	char *str = _convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);

	return (count);
}
