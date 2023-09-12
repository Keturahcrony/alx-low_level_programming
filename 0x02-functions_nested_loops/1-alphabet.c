#include <stdio.h>
/**
 * main - main function
 * putchar - output command
 * Return: return alphabet
 */

void print_alphabet(void)
{
	char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
}
