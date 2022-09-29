#include "main.h"
/**
 * _strlen_recursion - returns thr length of a string
 * @s: char pointer
 * Return: size of string integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
