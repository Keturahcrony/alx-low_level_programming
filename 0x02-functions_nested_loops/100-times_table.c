#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints times table starting with 0
 * @n: number of times time to print
 * Return: times table figure
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
	return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

	printf("%d", result);

	if (j < n)
	{
	printf(", ");
	}

	else
	{
	printf("\n");
	}
	}
	}
}

int main(void)
{
	int n = 15;

	print_times_table(n);
	return (0);
}

