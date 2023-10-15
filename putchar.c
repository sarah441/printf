#include "main.h"

/**
 * _putchar - print char
 * @character: The character
 * Return: 1, success, -1 error
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
