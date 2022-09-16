#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: integer
 * Return: 1 for letter, lowercase or uppercase 0 if not
 */
int _isalpha(int c)
{
	if (c < 65)
	{
		return (0);
	}
	else if (c > 122)
	{
		return (0);
	}
	else if (c >= 91 && c <= 96)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
