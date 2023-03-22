#include "main.h"

/**
 * print_sign - function that prints signs
 *
 * @r: function parameter
 *
 * Return: 1, 0 and -1
 */

int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (r == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
