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
