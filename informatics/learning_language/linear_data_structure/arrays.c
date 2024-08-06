#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr = malloc(sizeof(int) * 5);

    arr = realloc(arr, sizeof(int) * 10);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = arr[i] * 2;
    }

    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
