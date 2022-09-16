#include "main.h"
/**
 * times_table - prints the 9 times table, from 0
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int mul = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			if (mul > 9)
			{
				putchar(' ');
				putchar((mul / 10) + '0');
				putchar((mul % 10) + '0');
				if (j != 9)
				{
					putchar(',');
				}
			}
			else
			{
				if (j != 0)
				{
					putchar(' ');
					putchar(' ');
				}
				putchar('0' + (mul));
				if (j != 9)
				{
					putchar(',');
				}
			}
		}
		putchar('\n');
	}
}
