#include "main.h"

/**
 * print_char - print a char
 * @params: paramaters to directive
 * Return: number of char
 */

int print_char(va_list params)
{
	return (_putchar(va_arg(params, int)));
}

/**
 * print_string - print a string
 * @params : parameters to directive
 * Return: number of char
 */

int print_string(va_list params)
{
	return (_puts(va_arg(params, char *)));
}

/**
 * print_cust_string - custom printer of string
 * @params : parameters to directive
 * Return: number of char
 */

int print_cust_string(va_list params)
{
	char *s = va_arg(params, char *), str;
	int i = 0, count = 0;


	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 32 && s[i] <= 127)
		{
			count += _putchar(s[i]);
		}
		else
		{
			count += _puts("\\x");
			str = convert(s[i], 16, 0);
			if (!str[1])
				count += _putchar('0');
			count += _puts(str);
		}
	}

	return (count);
}
