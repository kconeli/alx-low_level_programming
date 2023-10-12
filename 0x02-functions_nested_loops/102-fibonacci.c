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
	int i;
	long int f = 0, s = 1;

	while ( i < n)
	{
	
		long int next = f + s;
		f = s;
		s = next;
		printf("%ld, ",f);
		i++;
	}
	printf("\n");
	return (0);
}
