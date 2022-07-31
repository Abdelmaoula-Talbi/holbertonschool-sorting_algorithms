#include "sort.h"

/**
 * quick_sort - ascending sort of integers array using quick sort algorithm.
 * @array: array to sort.
 * @size: size of the array.
 * Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
	size_t i, j, start_1, start_2, end_1, end_2, sub_size_1, sub_size_2;
	int tmp, temp;

	if (size < 2)
		return;
	for (i = -1, j = 0; j < (size - 1); j++)
	{
		if (array[j] < array[size - 1])
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
	temp = array[size - 1];
	array[size - 1] = array[i + 1];
	array[i + 1] = temp;
	print_array(array, size);
	start_1 = 0;
	end_1 = i;
	start_2 = (i + 1) + 1;
	end_2 = size - 1;
	sub_size_1 = (end_1 - start_1) + 1;
	sub_size_2 = (end_2 - start_2) + 1;
	quick_sort(array, sub_size_1);
	quick_sort(array, sub_size_2);
}
