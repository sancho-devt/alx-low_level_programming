#include <stdio.h>
/**
 * main - first 98 fibonacci series
 * Return: integer
 */
int main(void)
{
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long sum = first + second;
	int i;
	unsigned long m, n, p, carry;

	printf("%lu, %lu, ", first, second);

	for (i = 3; i <= 91; i++)
	{
		printf("%lu, ", sum);

		first = second;
		second = sum;
		sum = first + second;
	}
	m = first % 1000;
	first /= 1000;
	n = second % 1000;
	second /= 1000;

	while (i <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		sum = (first + second) + carry;
		m = n;
		n = p;
		first = second;
		second = sum;
		if (p >= 100)
			printf("%lu%lu", sum, p);
		else
			printf("%lu0%lu", sum, p);
		if (i != 98)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
