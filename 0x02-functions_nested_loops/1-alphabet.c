#include <stdio.h>
/**
 * print_alphabet - print all alphabet in lower case
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
