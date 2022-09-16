#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: character pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sum = 0;
	int exist = 0;
	int c = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 43 || s[i] == 45)
		{
			c = s[i];
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			sum = sum * 10 + (s[i] - 48);
			exist = 1;
		}
	}
	sum *= c;

	if (exist == 0)
		return (0);
	else
		return (sum);
}
