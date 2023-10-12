#include <stdio.h>
/**
 * main - starting
 *
 * prints the first 50 Fibonacci numbers
 *
 * Return: returns 0
 */
int main (void)
{
	int n = 50;
	long int f = 0, s = 1;

	for (int i = 0; i <= n; i++)
	{
		printf("%ld, ",f);
		long int next = f + s;
		f = s;
		s = next;
	}
	printf("\n");
	return (0);
}
