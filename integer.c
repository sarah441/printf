#include "main.h"

/**
 * printf_integer - prints integer number
 * @args: number arguements
 * @pcount: the pcount characters
 * Return: printed characters
 */

int printf_integer(va_list args, int pcount)
{
	int num = va_arg(args, int);
	int digits = 0;
	int temp = num;
	int digit;

	if (num < 0)
	{
		pcount += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		pcount += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (pcount);
}
