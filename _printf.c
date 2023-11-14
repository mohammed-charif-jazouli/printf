#include "main.h"

/**
* _printf - custom printf function
* @format: string to print
*
* Return: len
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
			case 'c':
				_print_char(args);
				i++;
				break;
			case 's':
				_print_string(args);
				i++;
				break;
			default:
				break;
		}
	}

	printf("%i\n", len);
	va_end(args);
	return (len);
}
