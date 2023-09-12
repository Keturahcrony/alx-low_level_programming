#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the characater c to standard output
 * @c: The character to display
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
