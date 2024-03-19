#include <stdio.h>

// https://informatics.msk.ru/mod/statements/view.php?id=280#1
void even_numbers()
{
	int a;
	int b;
	int i;

	scanf("%d%d", &a, &b);

	for (i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=334#1
void remains()
{
	int a;
	int b;
	int c;
	int d;
	int i;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    for (i = a; i <= b; i++)
	{
        if (i % d == c)
		{
            printf("%d ", i);
        }
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=339#1
void minimum_divisor()
{
	int x;
	int i;

	scanf("%d", &x);

	for (i = 2; i <= x; i++)
	{
    	if (x % i == 0)
		{
            printf("%d\n", i);
        }
    }
}

//https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=340#1
void dividers()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) 
	{
        if (x % i == 0) 
		{
            printf("%d\n", i);
        }
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=343#1
void sum_of_the_numbers()
{
    int N, num, sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("%d\n", sum);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=345#1
void zeros()
{
    int N, num, count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &num);
        if (num == 0) 
	{
            count++;
        }
   }

    printf("%d\n", count);
}
