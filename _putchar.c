#include "main.h"

/**
* _putchar - custom printf function
* @c: string to print
*
* Return: len
*/
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
