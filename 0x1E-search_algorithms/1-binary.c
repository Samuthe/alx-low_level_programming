#include "search_algos.h"

void print_array(int *array, size_t i, size_t size);

int binary_search(int *array, size_t size, int value)
{
    size_t element = 0, biggest = size - 1, half = 0;

    if (array == NULL || value == 0)
        return (-1);

    /*the result from half size of the array*/
    print_array(array, element, size);
    /*
    a[] = 2, 4, 6, 8, 14, 20, 1, 3, 16, 10*/
    while (element < biggest)
    {
        half = (element + biggest) / 2;
        /*x = 2, 4, 6, 8, 14
        y = 20, 1, 3, 16, 10*/
        if (array[half] < value)
        {
            element = half + 1;
            /*
            l = 2, 4, 6
            r = 8, 14
            */
            print_array(array, element, biggest + 1);
        }
        else if (array[half] > value)
        {
            biggest = half - 1;
            print_array(array, element, biggest + 1);
        }
        else
            return (array[half]);
    }
    return (-1);
}

void print_array(int *array, size_t i, size_t size)
{
    printf("Searching in array: ");
    while (i < size)
    {
        if (i + 1 == size)
            printf("%d ", array[i]);
        else
            printf("%d, ", array[i]);
        i++;
    }
    printf("\n");
}
