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
 * Return: write a string to stdout
 */

int _puts(char *s)
{
	int i;
	
	if (!s)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}
