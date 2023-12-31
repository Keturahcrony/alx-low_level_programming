#include "main.h"

/**
 * _isalpha - checks alphabetic characters
 *@c: the character to be checked
 *
 *Return: 1 if c is a letter
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z') || (c <= 0 && c <= 108));
}
