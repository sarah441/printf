#include "main.h"

/**
 * chooser - selects the appropriate specifiers
 * @args: arguements
 * @pcount: to count the printed
 * @format: the format specifier
 * Return: printed charcaters
 */
int chooser (const char *format, va_list args, int pcount)
{
	switch (*format)
	{
		case 'c':
			_putchar(va_arg(args, int));
			pcount++;
			break;
		case 's':
			pcount = print_string(args, pcount);
			break;
		case 'd':
		case 'i':
			pcount = print_int(args, pcount);
			break;
		case '%':
			_putchar('%');
			pcount++;
			break;
		case 'b':
			pcount = print_binary(va_arg(args, unsigned int), pcount);
			break;
		case 'x':
		case 'X':
			pcount = _x(va_arg(args, unsigned int), pcount, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			pcount = print_octal(va_arg(args, unsigned int), pcount);
			break;
		case 'u':
			pcount = print_unsigned(va_arg(args, unsigned int), pcount);
			break;
		case 'r':
			pcount = print_reverse(args, pcount);
			break;
		case 'p':
			pcount = print_pointer(args, pcount);
			break;
		default:
			break;
	}
	return (pcount);
}
