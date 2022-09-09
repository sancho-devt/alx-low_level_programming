#include <stdio.h>
/**
 * main - prints lowercase alphabet reverse
 * Description: This is a program that print reverse alphabet
 * Return: return 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

