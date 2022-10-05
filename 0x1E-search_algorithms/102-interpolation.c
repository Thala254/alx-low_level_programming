#include "search_algos.h"

#define MID_POS(arr, lo, hi, val) \
	((lo) + (double)((hi) - (lo)) / ((arr)[hi] - (arr)[lo]) * ((val) - (arr)[lo]))

#define PRINT_ARRAY_ELEMENT(array, index) \
	printf("Value checked array[%lu] = [%d]\n", index, array[index])

int interpolation_recursive(int *array, size_t low, size_t high, int value);

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 *
 * Return: first index of value or -1 if NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array && size)
		return (interpolation_recursive(array, low, high, value));
	return (-1);
}

/**
 * interpolation_recursive - recursively searches for a value in a
 * sorted array of integers using interpolation technique
 * @array: pointer to the first element of the array to search in
 * @low: lower boundary value
 * @high: upper boundary value
 * @value: value to search for
 * Return: index of the value or -1 if NULL
 */
int interpolation_recursive(int *array, size_t low, size_t high, int value)
{
	size_t pos = MID_POS(array, low, high, value);

	if (low <= high && value >= array[low] && value <= array[high])
	{
		if (array[pos] == value)
		{
			PRINT_ARRAY_ELEMENT(array, pos);
			return (pos);
		}
		if (array[pos] < value)
		{
			PRINT_ARRAY_ELEMENT(array, pos);
			return (interpolation_recursive(array, pos + 1, high, value));
		}
		PRINT_ARRAY_ELEMENT(array, pos);
		return (interpolation_recursive(array, low, pos - 1, value));
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
