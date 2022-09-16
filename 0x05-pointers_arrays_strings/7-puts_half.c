#include "main.h"
/**
 * puts_half - prints half of string
 * @str: char pointer
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n;
	int m;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	n = i;

	if (n % 2 == 0)
		n = i / 2;
	else
		n = ((i - 1) / 2) + 1;

	for (m = n; str[m] != '\0'; m++)
	{
		putchar(str[m]);
	}
	putchar('\n');
}
