#include "main.h"

/**
 * _isalph - check if a character is alphabetic
 * Return: 1 if is character 0 oterwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
