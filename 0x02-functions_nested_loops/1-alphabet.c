#include <stdio.h>
/**
 * main - main function
 * putchar - output command
 * Return: return alphabet
 */

int main(void)
{
	char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
		return (0);
}
