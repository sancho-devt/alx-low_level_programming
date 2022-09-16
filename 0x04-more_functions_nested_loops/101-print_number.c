#include "main.h"

/**
 * print_number - prints a integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
        if (n < 9)
                putchar(n);
        else if (n < 99)
        {
                putchar((n / 10) + '0');
                putchar((n % 10) + '0');
        }
	else if ( n < 999)
	{
                putchar((n / 100) + '0');
                putchar(((n / 10) % 10) + '0');
                putchar((n % 10) + '0');
        }
        else
	{
	        putchar((n / 1000) + '0');
	        putchar(((n / 100) % 10)  + '0');
                putchar(((n / 10) % 10) + '0');
                putchar((n % 10) + '0');
	}
}
