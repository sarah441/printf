#include "main.h"

/**
 * chooser - selects specifiers
 * @args: number of arguements
 * @pcount: the number of printed characters
 * @format: the specifier
 * Return: number of printed
 */

int chooser(const char *format, va_list args, int pcount)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			pcount = printf_integer(args, pcount);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			pcount++;
			break;
		case 's':
			pcount = printf_string(args, pcount);
			break;
		case '%':
			_putchar('%');
			pcount++;
			break;
		case 'b':
			pcount = printf_binary(va_arg(args, unsigned int), pcount);
			break;
		case 'x':
		case 'X':
			pcount = _x(va_arg(args, unsigned int), pcount, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			pcount = printf_octal(va_arg(args, unsigned int), pcount);
			break;
		case 'u':
			pcount = printf_uinteger(va_arg(args, unsigned int), pcount);
			break;
		case 'r':
			pcount = printf_reverse(args, pcount);
			break;
		case 'p':
			pcount = printf_pointer(args, pcount);
			break;
		default:
			break;
	}
	return (pcount);
}
