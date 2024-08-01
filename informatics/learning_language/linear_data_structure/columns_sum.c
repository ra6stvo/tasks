#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[10][10];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = m - 1; j >= 0; j--) 
    {
        int sum = 0;
        
        for (int i = 0; i < n; i++) 
        {
            sum += a[i][j];
        }
        printf("%d ", sum);
    }

    printf("\n");

    return 0;
}

// https://stepik.org/lesson/64657/step/8?unit=41549
