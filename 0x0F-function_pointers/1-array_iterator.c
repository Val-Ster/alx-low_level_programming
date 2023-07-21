#include <stdio.h>

/* Function to execute a given action on each element of an integer array */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i; /* Declaration moved to the beginning of the block */

    if (array == NULL || action == NULL)
        return;

    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
