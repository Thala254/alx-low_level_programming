#include "search_algos.h"

int _advanced_binary(int *array, size_t lower, size_t upper, int value);
void print_array(int *array, int lower, int upper);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 *
 * Return: first index of value or -1 if NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array && size)
		return (_advanced_binary(array, 0, size - 1, value));
	return (-1);
}

/**
 * _advanced_binary - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @lower: lower boundary of the array
 * @upper: upper boundary of the array
 * @value: value to search for
 *
 * Return: index of value in array or -1 if NULL
 */
int _advanced_binary(int *array, size_t lower, size_t upper, int value)
{
	if (upper >= lower)
	{
		size_t mid = (upper + lower) / 2;

		print_array(array, lower, upper);
		if (array[mid] < value)
			return (_advanced_binary(array, mid + 1, upper, value));
		if (array[mid] > value)
			return (_advanced_binary(array, lower, mid, value));
		if (array[mid - 1] == value)
			return (_advanced_binary(array, lower, mid, value));
		return (mid);
	}
	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @lower: lower boundary of array
 * @upper: upper boundary of array
 * Return: void
 */
void print_array(int *array, int lower, int upper)
{
	int i;

	printf("Searching in array: ");
	for (i = lower; i < upper; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[upper]);
}
