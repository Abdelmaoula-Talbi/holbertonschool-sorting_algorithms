#include "sort.h"

/**
 * selection_sort - function to sort an array using selection sort algorithm.
 * @array: array of integers to sort.
 * @size: size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
/*	const int *sorted;*/
	int min_val;
	size_t i, k, l;

	for (i = 0; i < size; i++)
	{
		min_val = array[i];
		for (k = i + 1; k < size; k++)
		{
			if (min_val > array[k])
			{
				min_val = array[k];
				l = k;
			}
		}
		if (array[i] != min_val)
		{
			array[l] = array[i];
			array[i] = min_val;
			print_array(array, size);
		}
	}
}
