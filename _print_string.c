#include "main.h"

/**
* _print_string - format string
* @args: string to format
*
* Return: length of string
*/
int _print_string(va_list args)
{
	return (_putstr(va_arg(args, char *)));
}
