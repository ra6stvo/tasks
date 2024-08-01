#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int a[10][10];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    int main_diagonal = 1;
    for (int i = 0; i < n; i++) 
    {
        main_diagonal = main_diagonal * a[i][i];
    }

    int sec_diagonal = 1;
    for (int i = 0; i < n; i++) 
    {
        sec_diagonal = sec_diagonal * A[I][n - 1 - i];
    }

   
    if (main_diagonal > sec_diagonal) 
    {
        printf("%d %d\n", main_diagonal, sec_diagonal);
    } 
    
    else 
    {
        printf("%d %d\n", sec_diagonal, main_diagonal);
    }

    return 0;
}
