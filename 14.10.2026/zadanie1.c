#include <stdio.h>
int smena(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
int kikido() {
	int a, b;
	printf("Введите 2 числа: \n");
	scanf_s("%d %d", &a, &b);
	printf("Числа до обмена: %d %d\n", a, b);
	smena(&a, &b);
	printf("Числа после обмена: %d %d\n", a, b);
	return 0;
}
