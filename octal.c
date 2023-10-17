#include "main.h"

/**
 * printf_octal - prints a binary number
 * @num: number of arguements
 * @pcount: the pcount characters
 * Return: printed characters
 */

int printf_octal(unsigned int num, int pcount)
{
	int oct[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 8;

		oct[i] = 48 + remainder;
		i++;
		num /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		pcount++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			pcount++;
		}
	}
	return (pcount);
}
