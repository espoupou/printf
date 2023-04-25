#include "main.h"
#include <stdlib.h>

/**
 * print_handler - handler which printf function to choose
 * @c: the directive
 * Return: right print function pointer
 */

int (*print_handler(char c))(va_list params)
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
		};
	int i;

	for (i = 0; i < 9; i++)
		if (ph[i].c == c)
			return (ph[i].f);

	return (NULL);
}
