#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char character);
int printf_char(va_list args, int pcount);
int printf_string(va_list args, int pcount);
int printf_integer(va_list args, int pcount);
int chooser(const char *format, va_list args, int pcount);
int printf_binary(unsigned int num, int pcount);
int _x(unsigned int num, int pcount, int uppercase);
int printf_octal(unsigned int num, int pcount);
int printf_uinteger(unsigned int num, int pcount);
int printf_reverse(va_list args, int pcount);
int printf_pointer(va_list args, int pcount);

#endif
