#include "main.h"

int _putstr(char *s)
{
	while (*s)
		_putchar(*s++);
	return (0);
}