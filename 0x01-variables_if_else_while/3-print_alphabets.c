#include <stdio.h>
/**
 * main - lower and uppercase alphabet
 * Description: This program prints the lower and uppercase of alphabet
 * Return: return 0
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	for (A = 'A' ; A <= 'Z' ; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}

