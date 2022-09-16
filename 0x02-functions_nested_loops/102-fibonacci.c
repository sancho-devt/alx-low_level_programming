#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: integer
 */
int main(void)
{
	long firstNum = 1;
	long secondNum = 2;
	long sum = firstNum + secondNum;
	int i;

	printf("%ld, %ld, ", firstNum, secondNum);
	for (i = 3; i <= 50; i++)
	{
		printf("%ld", sum);
		firstNum = secondNum;
		secondNum = sum;
		sum = firstNum + secondNum;
		if (i != 50)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
