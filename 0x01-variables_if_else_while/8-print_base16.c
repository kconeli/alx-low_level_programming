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
	for (num1 = 'a'; num1 <= 'f'; num1++)
		putchar(num1);
	putchar('\n');
	return (0);
}
