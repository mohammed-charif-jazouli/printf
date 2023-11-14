#include "main.h"

int _print_string(va_list args)
{
	return (_putstr(va_arg(args, char *)));
}