#include "sort.h"

/**
 * bubble_sort - sorts using bubble sort
 * @array: aarray to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int swapped = 1;
	int temp;

	if (size < 2)
		return;
	while (swapped)
	{
		swapped = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
