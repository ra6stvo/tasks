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

    int palindrome = 1;
    
    for (int i = 0; i < n / 2; i++) 
    {
        if (arr[i] != arr[n - i - 1]) 
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) 
    {
        printf("YES\n");
    }
    
    else 
    {
        printf("NO\n");
    }

    free(arr);
    
    return 0;
}
