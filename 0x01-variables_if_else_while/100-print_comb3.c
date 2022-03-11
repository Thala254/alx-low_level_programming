#include <stdio.h>

/**
 * main - prints possible combinations of two digits
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char a = '0';
	char b = '0';

	while (a < '9')
	{
		while (b <= '9')
		{
			if (a != b && b > a)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = '0';
		a++;
	}
	return (0);
}
