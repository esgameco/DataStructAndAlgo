#include "array.h"

void* createArray(size_t length, void* type)
{
    return malloc(length * sizeof(type));
}

void deleteArray(void* array)
{
    free(array);
    array = NULL;
}

void fillArray(void* array, size_t length, int64_t val)
{
    for (uint64_t i = 0; i < length; i++)
        array[i] = val;
}
