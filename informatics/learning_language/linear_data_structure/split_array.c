#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    arr = (int *)realloc(arr, (n + 1) * sizeof(int));

    arr[n] = arr[0];
    
    n += 1;

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
