#ifndef ARRAY
#define ARRAY

#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>

/*
 * Array
 */

void* createArray(size_t length, void* type);
void deleteArray(void* array);
void fillArray(void* array, size_t length, int64_t val);

#endif
