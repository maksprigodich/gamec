#include <stdio.h>
#include <locale.h>
int* let(int *a, int *b, int *c) {
	int* m = a;
	if (*b > *m) {
		m = b;
	}
	if (*c > *m) {
		m = c;
	}
	return m;
}
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int* max = let(&a, &b, &c);
	printf("Максимальное число из тройки : %d", *max);
	return 0;
}
