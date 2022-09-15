#include"main.h"

/**
 * print_last_digit - prints last digit of integer input
 * @n: integer to modify
 *
 * Return: 1
 */
int print_last_digit(int n)
{
	int l = n % 10;

		if (l < 10)
			l *= -1;

	_putchar(l + '0');
	return (l);
}
