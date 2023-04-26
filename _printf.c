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

	register int count = 0;

	int (*print)(va_list, fH *);

	fH f = {0, 0, 0};

	va_start(params, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

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
		while (flag_handler(*p, &f))
			p++;
		print = print_handler(*p);
		count += (print)
			? print(params, &f)
			: _printf("%%%c", *p); /* print the directive as it is */
	}
	va_end(params);
	_putchar(-1);
	return (count);
}
