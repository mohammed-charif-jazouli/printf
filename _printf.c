#include "main.h"

/**
* _printf - custom printf function
* @format: string to print
*
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int len = 0;
	va_list args;

	va_start(args, format);
	do {
		if (*format != '%')
		{
			_putchar(*format);
			len++;
			continue;
		}

		switch (*++format)
		{
			case 's':
				len += print_string(args);
				break;
			case 'c':
				len += print_char(args);
				break;
			case 'd':
				len += print_int(args);
				break;
			case 'i':
				len += print_int(args);
				break;
			default:
				break;
		}
	} while (*++format);

	va_end(args);
	return (len);
}
