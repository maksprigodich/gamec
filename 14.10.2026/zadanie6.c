#include <stdio.h>
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int* p;
	p = &a;
	printf("Переменная a: адрес = %p, значение = %d\n", (void*)p, *p);
	p = &b;
	printf("Переменная b: адрес = %p, значение = %d\n", (void*)p, *p);
	p = &c;
	printf("Переменная c: адрес = %p, значение = %d\n", (void*)p, *p);
	return 0;
}
