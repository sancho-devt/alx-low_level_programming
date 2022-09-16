#include "main.h"

/**
 * print_times_table - prints the n times of number
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j == 0)
				printf("%d", product);
			else if (product <= 9)
				printf("  %d", product);
			else if (product <= 99)
				printf(" %d", product);
			else
				printf("%d", product);
			if (j != n)
				printf(", ");
		}
		printf("\n");
	}
}
