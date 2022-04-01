#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: chracter to be printed
 * Return: character to write to stdout
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
