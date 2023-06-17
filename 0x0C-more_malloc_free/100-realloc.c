#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory
 * @ptr: Pointer to the memoryy allocated by malloc
 * @old_size: Size of the allocated memory for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *pt1;
    char *pt;
    unsigned int q;

    if (new_size == old_size)
        return ptr;

    if (new_size == 0 && ptr)
    {
        free(ptr);
        return NULL;
    }

    if (!ptr)
        return malloc(new_size);

    pt = malloc(new_size);
    if (!pt)
        return NULL;

    pt1 = ptr;

    if (new_size < old_size)
    {
        for (q = 0; q < new_size; q++)
            pt[q] = pt1[q];
    }
    else
    {
        for (q = 0; q < old_size; q++)
            pt[q] = pt1[q];
    }

    free(ptr);
    return pt;
}
