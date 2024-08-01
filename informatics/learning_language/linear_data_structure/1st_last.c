#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int c = arr[0];
    int d = arr[n - 1];

    int b = 0;

    for (int i = 1; i < n - 1; i++) 
    {
        if (arr[i] < d && arr[i] > c) 
        {
            printf("%d ", arr[i]);
            b = 1;
        }
    }

    if (!b) 
    {
        printf("0");
    }

    free(arr);

    return 0;
}

// https://stepik.org/lesson/64560/step/6?unit=41410
