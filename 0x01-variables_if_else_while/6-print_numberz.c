#include <stdio.h>
/**
 * main - main function
 *
 * putchar - output display fucntion
 * Return: returning value
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
