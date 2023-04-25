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
 * convert - converter from decimal and base
 * @num: number
 * @base: base
 * @lowercase: if hexa values need to be lowercase
 * Return: string pointer of convertion
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	int a;
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = ((a = (num % base))  < 10)
				? (a + '0')
				: ((lowercase)
					? (a + 'a')
					: (a + 'A'));
		num /= base;
	} while (num != 0);

	return (ptr);
}
