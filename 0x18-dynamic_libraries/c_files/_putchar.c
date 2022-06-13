#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: character to be printed
 * Return: 1 on success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
