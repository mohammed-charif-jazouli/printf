#include "main.h"

/**
* print_int - format int
* @args: int to format
*
* Return: length of int
*/
int print_int(va_list args)
{
	int len = 0, num;
	char *str;

	num = va_arg(args, int);
	while (num > 0)
	{
		printf("%c", '0' + (num % 10));
		*str++ = '0' + (num % 10);
	}

	len += _putstr(str);

	return (len);
}
