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

	num = va_arg(args, int);
	if (num < 0)
	{
		len += _putchar('-');
		num *= -1;
	}

	do {
		len += _putchar('0' + (num % 10));
		num -= num % 10;
		num /= 10;
	} while (num > 1);

	return (len);
}
