#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	do {
		printf("Введите свой возраст:\n");
		scanf_s("%d", &a);
		if (a < 1 || a > 120) {
			printf("Ваш возраст не подходит.\n");
		}
	} while (a < 1 || a >= 120);
	printf("Ваш возраст: %d", a);
	return 0;
}
