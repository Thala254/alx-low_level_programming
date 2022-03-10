#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = sizeof(char);
	int in = sizeof(int);
	int longin = sizeof(long int);
	int longlongin = sizeof(long long int);
	int flo = sizeof(float);

	printf("Size of a char: %d byte(s)\n", ch);
	printf("Size of an int: %d byte(s)\n", in);
	printf("Size of a long int: %d byte(s)\n", longin);
	printf("Size of a long long int: %d byte(s)\n", longlongin);
	printf("Size of a float: %d byte(s)\n", flo);
	return (0);
}
