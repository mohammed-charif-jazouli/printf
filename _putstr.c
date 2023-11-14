#include "main.h"

int _putstr(char *s)
{
	int len = 0;
	while (*s)
	{
		len++;
		_putchar(*s++);
	}
	return (len);
}