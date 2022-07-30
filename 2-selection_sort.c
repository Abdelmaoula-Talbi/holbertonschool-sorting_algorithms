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
	int tmp;
	size_t i, k/*, j*/;

	for (i = 0; i < size - 1; i++)
	{
		for (k = i + 1; k < size; k++)
		{
			if (array[i] > array[k])
			{
				tmp = array[i];
				array[i] = array[k];
				array[k] = tmp;
			}
		}
		/*for (j = 0; j < size - 1; j++)
		{
			sorted[j] = array[i];
		}*/
		print_array(array, size);
	}
}
