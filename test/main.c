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
	printf(" : %d\n", _printf("Wo%cld", 'r'));
	printf(" : %d\n", _printf("\nHello %s", "World"));
	printf(" : %d\n", _printf("%s%s", "Hello", "World"));
	printf(" : %d\n", _printf("Hel%co %c%s%c%s", 'l', 'h', "ell", 'o', "!!"));
        printf(" : %d\n", _printf("Hel%co %c%s%c%s%%", 'l', 'h', "ell", 'o', "!!"));

        printf(" : %d\n", _printf("Hello"));
	printf(" : %d\n", _printf("Hello %d", 0));
	printf(" : %d\n", _printf("Hello %i", 0));
	printf(" : %d\n", _printf("He%clo %d", 'l', 0));
	printf(" : %d\n", _printf("hell%c %s %d%d", '0', "World", 2, 0));

	printf(" : %d\n", _printf("Hello"));
        printf(" : %d\n", _printf("Hello %b", 0));
	printf(" : %d\n", _printf("Hello %b", 98));
        printf(" : %d\n", _printf("H%cllo %d %b", 'e', 100, 100));
	return (0);
}
