#include "main.h"

/**
* _putstr - print string
* @s: string to print
*
* Return: length of string
*/
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
