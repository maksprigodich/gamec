#include <stdio.h>
#include <math.h>
int main() {
	int N;
	int c = 0;
	scanf_s("%d", &N);
	if (N < 0) {
		N = fabs(N);
	}
	if (N == 0) {
		printf("Количество цифр - 1");
		return 1;
	}
	while (N > 0) {
		c++;
		N /= 10;
	}
	printf("Количество цифр - %d", c);
	return 0;
}
