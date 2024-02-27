#include <stdio.h>

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=253#1
void leap_year()
{
	int year = 0;

	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=295#1
void is_triangle_exists()
{
	int a;
	int b;
	int c;

	scanf("%d%d%d", &a, &b, &c);

	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
