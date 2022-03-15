#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		putchar('\n');
		i++;
	}

}
