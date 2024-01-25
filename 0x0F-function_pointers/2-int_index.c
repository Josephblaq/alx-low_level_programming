#include "function_pointers.h"
/**
 * int_index - function to search for an int
 * @array: array holding the int
 * @size: size of the array
 * @cmp: function pointer to compare searched int
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	return (-1);
}
