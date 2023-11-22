#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array integers
 * @size: amount elements in array
 */
void selection_sort(int *array, size_t size)
{
	size_t n, m, inf;
	int t;

	if (!array || size < 2)
		return;
	for (m = 0; m < size - 1; m++)
	{
		inf = m;
		for (n = m + 1; n < size; n++)
		{
			if (array[n] < array[inf])
			{
				inf = n;
			}
		}
		if (inf != m)
		{
			t = array[m];
			array[m] = array[inf];
			array[inf] = t;
			print_array(array, size);
		}
	}
}
