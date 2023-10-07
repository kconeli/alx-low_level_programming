#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point is the main function that prints string.
 *
 * @return int Return value indicating the exit status. In this case, 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	printf("\n");
	return (0);
}
