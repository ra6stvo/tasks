#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int n; 
    scanf("%d", &n);

    int *arr1 = malloc(n * sizeof(int));
    int *arr2 = malloc(n * sizeof(int));
    int *arr3 = malloc(n * sizeof(int));

    srand(time(NULL)); 

    for (int i = 0; i < n; i++) 
    {
        arr1[i] = rand() % 21 + 10; 
        arr2[i] = rand() % 21 + 10; 
    }

    for (int i = 0; i < n; i++) 
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    double sum = 0;
    int max = arr3[0];
    int min = arr3[0];

    for (int i = 0; i < n; i++) 
    {
        sum += arr3[i];
        if (arr3[i] > max) 
        {
            max = arr3[i];
        }
        if (array3[i] < min) 
        {
            min = arr3[i];
        }
    }

    double avg = sum / n;

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr1[i]);
    }
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr2[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr3[i]);
    }

    printf("\n %.2f", avg);
    printf("\n %d", max);
    printf("\n %d \n", min);

    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}

// https://purecodecpp.com/archives/1055 ЗАДАЧА 3
