#include "main.h"
/**
 * check_prime - checks whether given number is prime
 * @a: divider integer
 * @n: number integer
 * Return: integer
 */
int check_prime(int a, int n)
{
	if ((n % a) == 0)
		return (0);

	if (a > 10)
		return (1);

	a++;
	return (check_prime(a, n));
}
/**
 * is_prime_number - return 1 if it is prime number and 0 if not
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (n < 0)
		return (0);

	return (check_prime(2, n));
}
