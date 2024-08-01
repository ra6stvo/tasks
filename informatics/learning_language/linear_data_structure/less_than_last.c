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

    int last = arr[n - 1];
    int b = 0;

    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] < last) 
        {
            printf("%d ", arr[i]);
            b = 1; 
        }
    }

    if (!b) 
    {
        printf("0");
    }

    printf("\n");

    free(arr);

// https://stepik.org/lesson/64560/step/5?unit=41410

    return 0;
}
