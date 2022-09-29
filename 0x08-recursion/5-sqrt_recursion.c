#include "main.h"
/**
 * check_sqrt - checks if the given number is natural square
 * @a: integer
 * @n: integer number
 * Return: integer
 */
int check_sqrt(int a, int n)
{
	if ((a * a) > n)
		return (-1);
	else if ((a * a) == n)
		return (a);
	a++;
	return (check_sqrt(a, n));
}
/**
 * _sqrt_recursion - return the square root of number
 * @n: integer number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (n);

	return (check_sqrt(2, n));
}
