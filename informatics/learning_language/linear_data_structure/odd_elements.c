#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr = malloc(sizeof(int) * 50);

    int i = 0;
    int n = 1;
    while (i < 50) 
    {
        if (n % 2 != 0) 
        {
            arr[i] = n;
            i++;
        }
        n++;
    }

    for (int j = 0; j < 50; j++) 
    {
        printf("%d ", arr[j]);
    }

    free(arr);

    return 0;
}

// https://purecodecpp.com/archives/1055 ЗАДАЧА 2
