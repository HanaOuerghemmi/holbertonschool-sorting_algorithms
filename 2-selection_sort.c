#include "sort.h"
/**
 * selection_sort - function that sort selction
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int min;
	size_t i, j, indexMin;

	for (i = 0; i < size - 1; i++)
	{
		indexMin = i;
		/** */
		for (j = i + 1; j < size; j++)
		{
			if (array[indexMin] > array[j])
			{
				indexMin = j;
			}

			if (indexMin != i)
			{
				/** swap */
				min = array[indexMin];
				array[indexMin] = array[i];
				array[i] = min;
			}
		}
		print_array(array, size);
		}

	}
