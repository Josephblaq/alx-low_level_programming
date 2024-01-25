#include "function_pointers.h"
/**
 * array_iterator - function that iterates through an array
 * @array: array to be iterated
 * @size: size of array
 * @action: function pointer to array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(*array);
		array++;
	}
}
