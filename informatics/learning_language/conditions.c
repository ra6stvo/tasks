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

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=2959#1
void the_sign_of_the_number()
{
	int x;

	scanf("%d", &x);

	if (x > 0)
	{
		printf("1\n");
	} 
	else if (x < 0)
	{
		printf("-1\n");
	}
	else
	{
		printf("0\n")
	}
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=293#1
void Which_of_the_numbers_is_bigger()
{
	int a;
	int b;

	scanf("%d%d", &a, &b);

	if (a > b) 
	{
		printf("1\n"); 
	}
	else if (b > a) 
	{
		printf("2\n");
	}
	else 
	{
		printf("0\n")
	}
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=294#1
void maximum_of_three()
{
	int a;
	int b;
	int c;
	int max = a;

	scanf("%d%d%d", &a, &b, &c);

	if (c > max) 
	{
		max = c;
	}
	else if (b > max) 
	{
		max = b
	}

	printf("%d\n", max);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=260#1


// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=292#1
void maximum_of_two_numbers()
{
	int a;
	int b;

	scanf("%d%d", &a, &b);

	if (a > b)
	{
		printf("%d\n", a);
	}
	else 
	{
		printf("%d\n", b);
	}
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=2960#1
void testing_system()
{
	int student;
	int system;

	scanf("%d%d", &student, &system);

	if ((student != 1 && system != 1) || (student == 1 && system == 1))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
