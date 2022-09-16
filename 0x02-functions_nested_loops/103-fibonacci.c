#include <stdio.h>
/**
 * main - prints sum of even-valued fibonacci values
 * Return: integer
 */
int main(void)
{
	int i;
	int first = 1;
	int second = 2;
	int sum = 0;
	int evenSum = second;

	sum = first + second;

	for (i = 3; sum < 4000000; i++)
	{
		if (sum % 2 == 0)
			evenSum += sum;
		first = second;
		second = sum;
		sum = first + second;
	}

	printf("%d\n", evenSum);
	return (0);
}
