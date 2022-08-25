#include "sort.h"

/**
 * bubble_sort - sorting array of integers in a Bubble sort way
 * @array: array of integers to sort
 * @size: size of the array
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (size == 1)
		return;
	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
