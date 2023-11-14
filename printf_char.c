#include "main.h"

/**
* print_char - format character
* @args: character to format
*
* Return: succes - 1
*/
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
