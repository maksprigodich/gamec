#include <stdio.h>
#include <math.h>
int main() {
	double x, e;
	printf("Введите ваш x и Epsilon\n");
	printf("x ( в радианах ) и E ( в формате 1e-6 )\n");
	scanf_s("%lf %lf", &x, &e);
	double t = x;
	double s = 0.0;
	int n = 0;
	while (fabs(t) >= e) {
		s += t;
		n++;
		t *= (-x * x) / ((2 * n) * (2 * n + 1));
	}
	s += t;
	double sm = sin(x);
	double pogreshno = fabs(s - sm);
	printf("sin(%.4lf) = %.6lf ( teilor )\n", x, s);
	printf("sin(%.4lf) = %.6lf ( mathh )\n", x, sm);
	printf("pogreshnost' - %.10lf\n", pogreshno);
	return 0;
}
