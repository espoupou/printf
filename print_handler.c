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
		};
	int i;

	for (i = 0; i < 4; i++)
		if (ph[i].c == c)
			 return (ph[i].f);

	return (NULL);
}
