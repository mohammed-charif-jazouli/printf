#include "main.h"

/**
* _print_char - format character
* @args: character to format
*
* Return: succes - 1
*/
int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
