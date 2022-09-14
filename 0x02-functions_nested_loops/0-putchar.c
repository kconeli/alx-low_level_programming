#include "stdio.h"

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
		putchar(charName[p]);
	}
	putchar('\n');
	return (0);
}
