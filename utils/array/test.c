#include <stdio.h>

#include "array.h"

int main()
{
    int arrLength = 20;
    int* intArr = (int*)createArray(arrLength, *int);
    
    fillArray(intArr, arrLength, 0);

    deleteArray(intArr);

    return 0;
}
