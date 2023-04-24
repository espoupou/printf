#include "main.h"

/**
 * _strlen - count string lenght
 * @s: the string pointer
 * Return: the lenght
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;

	return (p - s);
}
