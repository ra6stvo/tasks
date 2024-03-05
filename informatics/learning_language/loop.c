#include <stdio.h>

// https://informatics.msk.ru/mod/statements/view.php?id=280#1
void even_numbers()
{
	int a;
	int b;
	int i;

	scanf("%d%d", &a, &b);

	for (i = a; i <= b; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=334#1
void remains() {
	int a;
	int b;
	int c;
	int d;
	int i;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    for (i = a; i <= b; i++) {
        if (i % d == c) {
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

	for (i = 2; i <= x; i++) {
    	if (x % i == 0) {
            printf("%d\n", i);
        }
    }
}
