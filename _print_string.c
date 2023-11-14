#include "main.h"

/**
* _print_string - custom printf function
* @args: string to print
*
* Return: len
*/
int _print_string(va_list args)
{
	return (_putstr(va_arg(args, char *)));
}
