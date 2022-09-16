#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: integer c
 *
 * Return: 0 for lowercase & 1 for uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

