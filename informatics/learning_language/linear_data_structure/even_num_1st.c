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

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            printf("%d ", arr[i]);
        }
    }

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 != 0) 
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    
    free(arr);
    
    return 0;
}

// https://stepik.org/lesson/64560/step/4?unit=41410
