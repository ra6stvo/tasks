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
