#include "main.h"

/**
 * print_signs of numbers
 * Return:0 if number is zero,
 * Return:1 if is greater than zero,
 * Return: -1 it is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0);
	{
		_putchar('0');
		return (0);
	}
		else
		{
			_putchar('-');
			return (-1);
		}
}
