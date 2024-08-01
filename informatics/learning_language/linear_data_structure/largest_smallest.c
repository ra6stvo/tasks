#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    int min; 
    int max;
  
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == min) 
        {
            arr[i] = max;
        } 
        
        else if (arr[i] == max) 
        {
            arr[i] = min;
        }
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

// https://stepik.org/lesson/64560/step/10?unit=41410
