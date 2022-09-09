#include <stdio.h>
/**
 * main - prints the base16
 * Description: This program prints out lowercase base16 hexadecimal
 * Return: return 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

