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
	int k = '2';

	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == '7' && j == '8' && k == '9')
				{
					putchar('\n');
				}

				else
			{
				putchar(',');
				putchar(' ');
			}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
