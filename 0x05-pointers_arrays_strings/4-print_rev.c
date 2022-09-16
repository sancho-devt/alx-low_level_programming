#include "main.h"
/**
 * print_rev - prints the reverse of string
 * @s: character pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int a;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (a = i - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
