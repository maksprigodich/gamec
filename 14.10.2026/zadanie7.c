#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int step, start, end;
	int sum = 0;
	printf("Введите шаг, начало и конец диапазона.\n");
	scanf_s("%d %d %d", &step, &start, &end);
	if (start > end) {
		printf("Начало диапазона не может быть больше конца диапазона.");
	}
	else {
		for (int i = start; i <= end; i += step) {
			sum += i;
		}
		printf("Сумма чисел: %d\n", sum);
	}
}
