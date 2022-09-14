#include<stdio.h>
#include "main.h"

/**
 * main - main function
 * Descriptions: print _putchar in new line
 * Return : 0
 */
int main(void)
{
	char charName[] = "_putchar";
	int p;

	for (p = 0; p < 8; p++)
	{
		_putchar(charName[p]);
	}
	_putchar('\n');
	return (0);
}
