#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: integer
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for  (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}

