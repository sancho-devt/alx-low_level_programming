#include "main.h"
/**
 * rev_string - reverse a string
 * @s: character pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int a;
	char *start, *end, ch;

	start = s;
	end = s;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (a = 0; a < i - 1; a++)
		end++;

	for (a = 0; a < i / 2; a++)
	{
		ch = *end;
		*end = *start;
		*start = ch;
		start++;
		end--;
	}
}
