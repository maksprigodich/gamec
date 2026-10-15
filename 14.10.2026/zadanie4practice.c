
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int N, min, max;
    double a;
    printf("Введите кол-во элементов в последовательности:\n");
    if (scanf_s("%d", &N) != 1 || N <= 0) {
        printf("Ошибка: N должно быть положительным.\n");
        return 1;
    }
    printf("Введите минимальное и максимальное значения:\n");
    if (scanf_s("%d %d", &min, &max) != 2 || min > max) {
        printf("Ошибка диапазона.\n");
        return 1;
    }
    srand(time(NULL));
    int s = 0;
    int e = 0;
    int o = 0;
    int maxim = 0, minim = 0;
    int number;
    int seriya = 1;
    int mseriya = 1;
    int p = 0;
    printf("Последовательность:\n");
    for (int i = 0; i < N; i++) {
        number = min + rand() % (max - min + 1);
        printf("%d ", number);
        s += number;
        if (number % 2 == 0) {
            e++;
        }
        else {
            o++;
        }
        if (i == 0) {
            maxim = number;
            minim = number;
            p = number;
            continue;
        }
        if (number > maxim) {
            maxim = number;
        }
        if (number < minim) {
            minim = number;
        }
        if (number > p) {
            seriya++;
        }
        else {
            seriya = 1;
        }
        if (seriya > mseriya) {
            mseriya = seriya;
        }
        p = number;
    }
    a = (double)s / N;
    printf("\nСумма: %d\n", s);
    printf("Среднее арифметическое: %.2f\n", a);
    printf("Максимум: %d\n", maxim);
    printf("Минимум: %d\n", minim);
    printf("Чётных чисел: %d\n", e);
    printf("Нечётных чисел: %d\n", o);
    printf("Максимальная возрастающая серия: %d\n", mseriya);
    return 0;
}
