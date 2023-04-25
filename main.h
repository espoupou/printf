#ifndef __MAIN_H__
#define __MAIN_H__

/* directive && function associated structure */
typedef struct _printfHandler
{
	char c;
	int (*f)(va_list params);
} pHandler;

int _printf(const char *format, ...);
int _strlen(char *s);

/* Utilities functions */
int _putchar(char c);
int _puts(char *s);

#endif
