#include <stdio.h>
/**
 * main - display single digit numbers
 * Description: This program prints the single digit number from zero
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

