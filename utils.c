#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character
 * @c: the character
 * Return: 1
 */

int _putchar(char c)
{
	char buffer[1];

	buffer[0] = c;
	write(1, &buffer, 1);
	return (1);
}

/**
 * _puts - write string
 * @s: the string
 * Return: number of char
 */

int _puts(char *s)
{
	int i;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}

/**
 * _print_int_helper - helper for print_int
 * @n: numer to print
 * Return: number of char
 */

int _print_int_helper(int n)
{
	int count = 0;

	if (n / 10)
		count += _print_int_helper(n / 10);

	return (count + _putchar((n % 10) + '0'));
}

/**
 * _convert - converter from decimal and base
 * @num: number
 * @base: base
 * @lowercase: if hexa values need to be lowercase
 * Return: string pointer of convertion
 */

char *_convert(unsigned long int num, int base, int lowercase)
{
	int a;
	static char buffer[50];
	char *p = &buffer[49];

	*p = '\0';
	do {
		*--p = ((a = (num % base))  < 10)
				? (a + '0')
				: ((lowercase)
					? (a + 'a')
					: (a + 'A'));
		num /= base;
	} while (num != 0);

	return (p);
}
