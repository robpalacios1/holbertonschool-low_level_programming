#include "function_pointers.h"
/**
 *int_index - index of array
 *@array: array
 *@cmp: pointer.
 *@size: length of the array.
 *Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int res;
	int i;

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
			if (res != 0)
			{
				return (i);
			}
	}
	return (-1);
}
