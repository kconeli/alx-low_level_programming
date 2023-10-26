#include <stdio.h>
/**
 * main - starting
 *
 * prints the even sum 4M Fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int n = 50;
	int i;
	long int f = 1, s = 1, sum = 0;

	while (i < n)
	{

		long int next = f + s;

		f = s;
		s = next;
		if (f <= 4000000)
		{
			long int sum = sum + f;
			printf("%ld, ", sum);
			i++;
		}
		sum = f + sum;
		printf("%ld SS", sum);
	}
	printf("\n");
	return (0);

}
