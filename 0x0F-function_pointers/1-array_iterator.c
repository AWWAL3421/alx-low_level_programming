#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - execute a function on each element of array
* @array: array
* @size: size of the array
* @action: pointer to the function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	return;

	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}

