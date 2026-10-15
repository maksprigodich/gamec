#include <stdio.h>
int main() {
	int N;
	int umn = 0;
	scanf_s("%d", &N);
	for (int i = 1; i <= 10; i++) {
		umn = N * i;
		printf("%d * %d = %d\n", N, i, umn);
	}
	return 0;
}
