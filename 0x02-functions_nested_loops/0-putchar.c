#include "main.h"

/**
 * main-main function
 * Description: print _putchar in new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char charName[] = "-putchar";
	int p;
		for (p = 0; p < 8; p++)
		{
		_putchar(charName[p]);
		}
		_putchar('\n');
		return (0);
}
