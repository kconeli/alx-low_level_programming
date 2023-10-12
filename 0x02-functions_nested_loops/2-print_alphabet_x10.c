#include "main.h"
#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int line,i;
	for (line=0;line<10; ++line)
	{
		for (i='a';i<='z';i++)
			_putchar(i);
		_putchar('\n');
	}
}
