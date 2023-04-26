#include "main.h"

/**
 * print_char - print a char
 * @params: paramaters to directive
 * @f: flags
 * Return: number of char
 */

int print_char(va_list params, fH *f)
{
	UNUSED(*f);
	return (_putchar(va_arg(params, int)));
}

/**
 * print_string - print a string
 * @params : parameters to directive
 * @f: flags
 * Return: number of char
 */

int print_string(va_list params, fH *f)
{
	 UNUSED(*f);
	return (_puts(va_arg(params, char *)));
}

/**
 * print_cust_string - custom printer of string
 * @params : parameters to directive
 * @f: flags
 * Return: number of char
 */

int print_cust_string(va_list params, fH *f)
{
	char *s = va_arg(params, char *), *str;
	int i = 0, count = 0;

	UNUSED(*f);
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			count += _puts("\\x");
			str = _convert(s[i], 16, 0);
			if (!str[1])
				count += _putchar('0');
			count += _puts(str);
		}
		else
			count += _putchar(s[i]);
	}

	return (count);
}

/**
 * print_rev - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rev(va_list l, fH *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	UNUSED(f);
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

/**
 * print_rot13 - prints a string using rot13
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rot13(va_list l, fH *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}
