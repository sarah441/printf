#include "main.h"

/**
 * printf_string - prints a string
 * @args: numberof arguements
 * @pcount: the pcount characters
 * Return: pcount characters
 */

int printf_string(va_list args, int pcount)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		pcount++;
		string++;
	}
	return (pcount);
}
