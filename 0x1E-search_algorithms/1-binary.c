#include "search_algos.h"

/**
* binary_search - function that searches for a value in a sorted array
* of integers using the Binary search algorithm
* @array:  pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: index of the value if present, -1 otherwise
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j = (size - 1);
	size_t mid = 0;
	size_t a = 0;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		mid = ((i + j) / 2);
		printf("Searching in array: ");
		a = i;
		while (a <= j)
		{
			if (a != j)
				printf("%d, ", array[a]);
			else
				printf("%d\n", array[a]);
			a++;
		}
		if (array[mid] < value)
			i = mid + 1;
		else if (array[mid] > value)
			j = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
