#include "main.h"

/**
* print_string - format string
* @args: string to format
*
* Return: length of string
*/
int print_string(va_list args)
{
	return (_putstr(va_arg(args, char *)));
}
