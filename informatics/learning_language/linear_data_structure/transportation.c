#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[10][10];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &mat[j][i]);
        }
    }

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// https://stepik.org/lesson/64657/step/3?unit=41549
