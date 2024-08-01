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

    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

// https://stepik.org/lesson/64560/step/2?unit=41410
