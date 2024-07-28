#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int *arr = malloc(n * sizeof(int));

    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double avg = (double)sum / n;

    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > avg) 
        {
            a++;
        } 
        else 
        {
            b++;
        }
    }

    int *a_arr = malloc(a * sizeof(int));
    int *b_arr = malloc(b * sizeof(int));

    int a_indx = 0;
    int b_indx = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > avg) 
        {
            a_arr[a_indx++] = arr[i];
        } 
        else 
        {
            b_arr[b_indx++] = arr[i];
        }
    }

    for (int i = 0; i < a; i++) 
    {
        printf("%d ", a_arr[i]);
    }
    for (int i = 0; i < b; i++) 
    {
        printf("%d ", b_arr[i]);
    }

    free(arr);
    free(a_arr);
    free(b_arr);

    return 0;
}

// https://stepik.org/lesson/64560/step/8?unit=41410
