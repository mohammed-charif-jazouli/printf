#include "main.h"

/**
* _print_string - format int
* @args: int to format
*
* Return: length of int
*/
int _print_int(va_list args)
{
	int len = 0;
	char *num = va_arg(args, char *);
	
	do
	{
		if (*num >= '0' || *num <= '9')
		{
			len++;
			_putchar(*num);
		}
		else
			return (-1);
	} while (*++num);

	return (len);
}
