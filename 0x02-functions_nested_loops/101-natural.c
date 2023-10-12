#include <stdio.h>
/**
 * main - start at main
 *
 * prints the sum of all the multiples of 3 or 5
 * below 1024
 *
 * Return: return 0
 */
int main(void)
{
	int x;
	int sum;

	for (x = 0; x < 1024; ++x)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum = sum + x;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
