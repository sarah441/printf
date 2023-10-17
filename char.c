#include "main.h"

/**
 * printf_char - printf charachter
 * @args: the arguements to use
 * @pcount: the printed characters number
 * Return: printed count
 */

int printf_char(va_list args, int pcount)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (pcount + 1);
}
