#include "main.h"

/**
 * _printf - mimic the original printf
 * @format: the printed
 * Return: number
 */

int _printf(const char *format, ...)
{
int pcount = 0;

va_list args;

va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{                
format++;
pcount = chooser(format, args, pcount);
format++;
}
else
{
_putchar(*format);
pcount++;
format++;
}
}
va_end(args);
return (pcount);
}
