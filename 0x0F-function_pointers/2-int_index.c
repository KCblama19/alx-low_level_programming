#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first matching element, or -1 if no match or invalid size
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array != NULL && cmp != NULL && size > 0)
    {
        int i;

        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]))
                return i;
        }
    }

    return -1;
}
