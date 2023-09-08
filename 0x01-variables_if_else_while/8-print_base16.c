#include <stdio.h>
/**
 * main - main fuction
 * Return: returning vlue
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

			for (j = 'A'; j <= 'F'; j++)
				putchar(j);
			putchar('\n');
			return (0);
}
