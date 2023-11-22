#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array integers
 * @size: amount of elements
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, s;
	int t, permit = 1;

	s = size;
	if (!array || s < 2)
		return;
	while (permit)
	{
		permit = 0;
		for (i = 1; i < s; i++)
		{
			if (array[i - 1] > array[i])
			{
				t = array[i - 1];
				array[i - 1] = array[i];
				array[i] = t;
				permit = 1;
				/*print reselt swapping*/
				print_array(array, size);
			}
		}
		s--;
	}
}
