#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));

    int *arr = malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; i++) 
    {
        arr[i] = rand() % 8 + 7;
    }

    printf("исходный:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        if (arr[i] > 10) 
        {
            arr[i] -= 10;
        }
    }

    printf("\n измененный:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

// https://purecodecpp.com/archives/1055 ЗАДАЧА 1
