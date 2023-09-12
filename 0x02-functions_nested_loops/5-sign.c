#include "main.h"

/**
 * print_sign - prints the sign of a given number
 *@n: the int to  check
 * Return: returns a value
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
	}
	return (-1);
}
