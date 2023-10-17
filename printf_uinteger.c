#include "main.h"

/**
 * printf_uinteger - prints a binary number
 * @num: number of arguements
 * @pcount: the pcount characters
 * Return: pcount charcaters
 */

int printf_uinteger(unsigned int num, int pcount)
{
	int digits = 0;
	unsigned int temp = num;

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		pcount++;
	}
	else
	{
		char unsigned_str[11];
		int i = 0;

		while (num != 0)
		{
			unsigned_str[i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
		for (i = digits - 1; i >= 0; i--)
		{
			_putchar(unsigned_str[i]);
			pcount++;
		}
	}
	return (pcount);
}
