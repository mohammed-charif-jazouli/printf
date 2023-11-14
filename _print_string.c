#include "main.h"

int _print_string(va_list args)
{
	_putstr(va_arg(args, char *));
	return (0);
}