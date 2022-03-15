#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n - integer to be computed
 * Return: integer in absolute value
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
