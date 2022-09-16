#include "main.h"
/**
 * jack_bauer - prints every minute of day
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(':');
					putchar(k + '0');
					putchar(l + '0');
					putchar('\n');
					if (i == 2 && j == 3 && k == 5 && l == 9)
						return;
				}
			}
		}
	}
}
