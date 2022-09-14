#include "main.h"

/**
 * print _alphabet - print alphabet in lowercase, follod by new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
