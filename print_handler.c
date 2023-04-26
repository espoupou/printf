#include "main.h"
#include <stdlib.h>

/**
 * print_handler - handler which printf function to choose
 * @c: the directive
 * Return: right print function pointer
 */

int (*print_handler(char c))(va_list, fH *)
{
	pHandler ph[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', print_bin},
		{'u', print_unsigned},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_cust_string},
		{'p', print_address},
		{'r', print_rev},
		{'R', print_rot13},
		};
	int i;

	for (i = 0; i < 13; i++)
		if (ph[i].c == c)
			return (ph[i].f);

	return (NULL);
}

/**
 * flag_handler - activate flags specified
 * @c: flag char
 * @f: flags
 * Return: bool (flag exist)?
 */

int flag_handler(char c, fH *f)
{
	int i = 0;

	if (c == '+')
	{
		f->plus = 1;
		i = 1;
	}
	else if (c == ' ')
	{
		f->space = 1;
		i = 1;
	}
	else if (c == '#')
	{
		f->hash = 1;
		i = 1;
	}

	return (i);
}
