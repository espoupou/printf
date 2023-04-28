#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character
 * @c: the character
 * Return: 1
 */

int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}

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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		_print_int_helper(n / 10);
	return (_putchar((n % 10) + '0'));
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
					? (a - 10 + 'a')
					: (a - 10 + 'A'));
		num /= base;
	} while (num != 0);

	return (p);
}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
