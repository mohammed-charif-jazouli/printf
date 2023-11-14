#include "main.h"

/**
* _printf - custom printf function
* @format: string to print
*
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
			i++;
			continue;
		}

		i++;
		switch (format[i])
		{
			case 's':
				len += _print_string(args);
				i++;
				break;
			case 'c':
				len += _print_char(args);
				i++;
				break;
			case 'd':
				len += _print_int(args);
				i++;
				break;
			case 'i':
				len += _print_int(args);
				i++;
				break;
			default:
				break;
		}
	}
	
	va_end(args);
	return (len);
}
