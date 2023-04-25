#include "main.h"

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
			count += _putchar(*p);
			continue;
		}

		p++;
		if (*p == '%')
		{
			count += _putchar('%');
		}
		else if (*p == 'c')
		{
			count += _putchar(va_arg(params, int));
		}
		else if (*p == 's')
		{
			count += _puts(va_arg(params, char *));
		}
		else
		{
			count += _putchar('%');
			count += _putchar(*p);
			va_arg(params, char *);
		}
	}
	va_end(params);

	return (count);
}
