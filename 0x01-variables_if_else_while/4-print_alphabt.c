#include <stdio.h>

/**
 * main - main body work
 *
 * putchar - output display function
 * Return: returning output value
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
		return (0);
}
