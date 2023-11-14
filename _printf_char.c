#include "main.h"

/**
* _print_char - custom printf function
* @args: string to print
*
* Return: len
*/
int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
