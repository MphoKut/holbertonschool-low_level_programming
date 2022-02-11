#include <stdio.h>
/**
 * main - finds and prints the largest prime factor
 * Return: 0 (Success)
 */
int main(void)
{
	long i, number = 612852475143;

	for (i = 2; i <= number; i++)
	{
		if (number % 1 == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
