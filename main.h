#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/* printf */
int _printf(const char *format, ...);

/* put */
int _putchar(char c);
int _putstr(char *s);

/* format functions */
int _print_char(va_list args);
int _print_string(va_list args);
int _print_int(va_list args);

#endif
