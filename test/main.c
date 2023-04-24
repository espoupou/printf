#include "main.h"
#include <stdio.h>

/**
 * main -main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char **argv)
{
	printf(" : %d\n", _printf("Hello"));
	printf(" : %d\n", _printf("World"));
	printf(" : %d\n", _printf("HelloWorld\n"));
	printf(" : %d\n", _printf("Hello World"));
	printf(" : %d\n", _printf("%s%s", "Hello", "World"));
	return (0);
}
