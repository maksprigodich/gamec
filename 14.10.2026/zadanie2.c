#include <stdio.h>
#include <locale.h>
int gega() {
	setlocale(LC_ALL, "Russian");
	int N;
	printf("Введите число - ");
	scanf_s("%d", &N);
	if (N == 0) {
		printf("Ноль, чётное");
	}
	else if (N > 0) {
		printf("Число положительное.\n");
		if (N % 2 == 0) {
			printf("Число чётное.\n");
			printf("Оно нам подходит.");
		}
		else {
			printf("Число нечётное.");
		}
	}
	else {
		printf("Число отрицательное.\n");
		if (N % 2 == 0) {
			printf("Число чётное.\n");
		}
		else {
			printf("Число нечётное.");
		}
	}
	return 0;
}
