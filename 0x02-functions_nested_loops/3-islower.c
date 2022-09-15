#include "main.h"

/**
 * _islower - check if a character c is lower case.
 * c  the character is to be checked
 *
 *Return: 1 if character c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

