#include <stdio.h>
/**
 * main - main function
 * putchar - output display function
 *
 * Return: returning value
 */

int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '8')
	{
		j = i + 1;

		while (j <= '9')
		{
			putchar(i);
			putchar(j);

			if (i == '8' && j == '9')
			{
				putchar('\n');
			}

			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	return (0);
}

