#ifndef __MAIN_H__
#define __MAIN_H__

#define UNUSED(x) (void)(x)

#include <stdarg.h>

/*
 * directive && function associated structure
 */

/**
 * struct flagHandler - Struct setting asked flags
 * @plus: plus flag
 * @space: space flag
 * @hash: hash flag
 */

typedef struct flagHandler
{
	int plus, space, hash;
} fH;

/**
 * struct printHandler - Struct of directive->function
 * @c: directive.
 * @f: function associated
 */

typedef struct printHandler
{
	char c;
	int (*f)(va_list params, fH *);
} pHandler;

int _printf(const char *format, ...);

/* Utilities functions */
int _putchar(char c);
int _puts(char *s);
int _print_int_helper(int n);
char *_convert(unsigned long int num, int base, int lowercase);

/* print handler */
int (*print_handler(char s))(va_list, fH *);
int flag_handler(char c, fH *f);

/* print alpha */
int print_char (va_list params, fH *f);
int print_string(va_list params, fH *f);
int print_cust_string(va_list params, fH *f);
int print_rev(va_list l, fH *f);
int print_rot13(va_list l, fH *f);
/* print num */
int print_int(va_list params, fH *f);
int print_unsigned(va_list params, fH *f);
int print_address(va_list params, fH *f);
/* print base */
int print_bin(va_list params, fH *f);
int print_oct(va_list params, fH *f);
int print_hex(va_list params, fH *f);
int print_HEX(va_list params, fH *f);

#endif
