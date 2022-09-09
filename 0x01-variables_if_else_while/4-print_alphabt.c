#include <stdio.h>
/**
 * main - prints lowercase alphabet
 * Description: This program prints the letters except q and e
 * Return: return 0
 */
int main(void)
{
	char a = 'a';

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}

