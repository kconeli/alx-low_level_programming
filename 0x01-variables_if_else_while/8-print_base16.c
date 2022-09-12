#include <stdio.h>

/**
 * main - prints numbers base 10
 *
 * eturn: Always return 0
 */
int main(void)
{
	int num;
	char num1;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (numl = 'a'; numl <= 'f'; numl++)
		putchar(numl);
	putchar('\n');
	return (0);
}
