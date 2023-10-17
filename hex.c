#include "main.h"

/**
 * _x - prints a hexa number
 * @num: number arguements
 * @pcount: the printed characters
 * @uppercase: the uppercase equivalent
 * Return: printed charcaters
 */

int _x(unsigned int num, int pcount, int uppercase)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[i] = 48 + remainder;
		}
		else
		{
			if (uppercase)
			{
				hex[i] = 65 + (remainder - 10);
			}
			else
			{
				hex[i] = 97 + (remainder - 10);
			}
		}
		i++;
		num /= 16;
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
			_putchar(hex[j]);
			pcount++;
		}
	}
	return (pcount);
}
