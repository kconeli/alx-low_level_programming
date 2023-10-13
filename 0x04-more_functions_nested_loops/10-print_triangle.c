#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: number of lines
 * Return: no return
*/
void print_triangle(int size)
{
	int row, column, x;

	if (size <= 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		for (x = row + column; x >= 1; colum--)
		{
			_putchar(' ');
		}
		for (x = row + column; x >= 1; x--)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
