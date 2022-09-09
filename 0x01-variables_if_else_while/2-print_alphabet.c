#include <stdio.h>
/**
 * main - alphabet in lowercase
 * Description: This program prints alphabet in lowercase
 * Return: return 0
 */
int main(void)
{
	char i = 'a';

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

