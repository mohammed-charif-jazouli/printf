#include "main.h"

/**
* _putstr - custom printf function
* @s: string to print
*
* Return: len
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
