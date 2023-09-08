#include <stdio.h>
/**
 * main - main function block
 * Return: returning the value
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
