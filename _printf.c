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
	do
	{
		if (*format != '%')
		{
			_putchar(*format);
			len++;
			continue;
		}

		switch (*++format)
		{
			case 's':
				len += _print_string(args);
				break;
			case 'c':
				len += _print_char(args);
				break;
			case 'd':
				len += _print_int(args);
				break;
			case 'i':
				len += _print_int(args);
				break;
			default:
				break;
		}
	} while (*++format);

	va_end(args);
	return (len);
}
