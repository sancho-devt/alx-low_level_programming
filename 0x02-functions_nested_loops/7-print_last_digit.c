#include "main.h"
/**
 * print_last_digit - prints the last digit of number
 * @n: integer
 * Return: integer
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n %= 10;
		n = n * -1;
	}

	_putchar((n % 10) + '0');
	return (n % 10);
}
