#include <stdio.h>

/**
 * main - main function
 *
 * putchar - display output
 * Return: returning  value
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar("\n");
	return (0);
}
