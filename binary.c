#include "main.h"

/**
 * printf_binary - prints a binary number
 * @num: number arguements
 * @pcount: the printed characters
 * Return: printed charcaters count
 */

int printf_binary(unsigned int num, int pcount)
{
	int binary[32] = {0};
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		pcount++;
		return (pcount);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		pcount++;
	}

	return (pcount);
}
