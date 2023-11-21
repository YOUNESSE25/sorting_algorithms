#include "sort.h"

/**
 * separ - two partitions creator
 * @array: array integers to sorted
 * @l: index
 * @h: index
 * @size: amount elements in array
 */
void separ(int *array, int h, int l, size_t size)
{
	int n;

	if (l < h)
	{
		n = organisation_bloc(array, l, h, size);
		separ(array, l, n - 1, size);
		separ(array, n + 1, h, size);
	}
}

/**
 * organisation_bloc - less values test and organisation
 * @array: array integers
 * @l: index
 * @h: index
 * @size: amount elements in array
 * Return: int
 */
int organisation_bloc(int *array, int h, int l, size_t size)
{
	int i, j, turn, t;

	turn = array[h];
	i = l;
	for (j = l; j < h; j++)
	{
		if (array[j] < turn)
		{
			t = array[i];
			array[i] = array[j];
			array[j] = t;
			if (array[i] != array[j])
				print_array(array, size);
			i++;
		}
	}
	t = array[i];
	array[i] = array[h];
	array[h] = t;
	if (array[i] != array[h])
		print_array(array, size);
	return (i);
}

/**
 * quick_sort - function that sorts an array of integers in ascending order using the Quick sort algorithm
 * @array: array sort
 * @size: length of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	separ(array, 0, (int)size - 1, size);
}