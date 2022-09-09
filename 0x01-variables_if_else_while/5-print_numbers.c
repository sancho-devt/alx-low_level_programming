#include <stdio.h>
/**
 * main - prints all single digit number
 * Description: This program prints all 10 base single digit numbers
 * Return: retunr 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}

