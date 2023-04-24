#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: the output format
 * Return: number of character printed
 */

int _printf(const char *format, ...)
{
	va_list params;
	const char *p;
	int count = 0;

	va_start(params, format);
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			count++;
			continue;
		}

		p++;
		if (*p == '%' || *p == 'c')
		{
			count++;
			printf("%d ", count);
		}
		else if (*p == 's')
		{
			count += _strlen(va_arg(params, char *));
			printf("%d ", count);
		}
	}
	va_end(params);

	return (count);
}
