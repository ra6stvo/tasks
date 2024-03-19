#include <stdio.h>

// a(0) a(1) a(2) ... a(n-1)
// Мажорный элемент - элемент, встречающийся более n / 2 раз

// 1 2 2 2 3 2 1 3 1 1 4 1 1 1

// cur  major  count
//  1     1       1
//  2     2       1
//  2     2       2
//  2     2       3
//  3     2       2
//  2     2       3
//  1     2       2
//  3     2       1
//  1     1       1
//  1     1       2
//  4     1       1
// ...
//  1     1       4


int main()
{
    int item;
    int count = 1;
    int major;
    size_t n;
    
    scanf("%zu %d", &n, &major);
    for (size_t i = 1; i < n; ++i)
    {
        scanf("%d", &item);
        if (major == item)
        {
            ++count;
        }
        else
        {
            --count;
        }
        if  (count == 0)
        {
            major = item;
            count = 1;
        } 
    }
    printf("%d\n", major);
    return 0;
}
