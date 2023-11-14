#ifndef _PRINTF_H
#define _PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/* printf */
int _printf(const char *format, ...);

/* put */
int _putchar(char c);
int _putstr(char *s);

/* format functions */
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);

#endif
