#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: character to be printed
 * Return: void
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
