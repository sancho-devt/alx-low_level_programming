#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: integer c
 *
 * Return: 0 if it is not digit 1 if it is
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

