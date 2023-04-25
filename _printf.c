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
	int (*print)(va_list);

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
			continue;
		}
		print = print_handler(*p);
		count += (print)
			? print(params)
			: _printf("%%%c", *p); /* print the directive as it is */
	}
	va_end(params);

	return (count);
}
