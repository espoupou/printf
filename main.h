#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>

/*
 * directive && function associated structure
 */

/**
 * struct printHandler - Struct op
 *
 * @c: directive.
 * @f: function associated
 */

typedef struct printHandler
{
	char c;
	int (*f)(va_list params);
} pHandler;

int _printf(const char *format, ...);
int _strlen(char *s);

/* Utilities functions */
int _putchar(char c);
int _puts(char *s);
int _print_int_helper(int n);
char *_convert(unsigned long int num, int base, int lowercase);

/* print handler */
int (*print_handler(char s))(va_list params);

/* print alpha */
int print_char (va_list params);
int print_string(va_list params);
int print_cust_string(va_list params);
/* print num */
int print_int(va_list params);
int print_unsigned(va_list params);
/* print base */
int print_bin(va_list params);
int print_oct(va_list params);
int print_hex(va_list params);
int print_HEX(va_list params);

#endif
