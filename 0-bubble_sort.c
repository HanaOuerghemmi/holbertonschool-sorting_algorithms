#include "sort.h"
/**
 * bubble_sort - function that sort  an array of integers in ascending order
 * @array: the table
 * @size: size of the table
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < (size - 1); i++)
	{
		/** Last i elements are already in place*/
		for (j = 0; j < ((size - i) - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}
