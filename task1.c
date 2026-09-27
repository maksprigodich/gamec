#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int md, pd;
	md = rand() % 4 + 1;
	printf("Выберите вашу дверь ( от 1 до 4 ):\n");
	scanf_s("%d", &pd);
	if (pd < 1 || pd > 4) {
		printf("Такой двери нет.\n");
	}
	else if (pd == md) {
		printf("Вы не смогли пройти мимо монстра, он вас съел.\n");
	}
	else {
		printf("Вы молодец! Проходите дальше.\n");
		md = rand() % 3 + 1;
		printf("Выберите вашу дверь ( от 1 до 3 ):\n");
		scanf_s("%d", &pd);
		if (pd < 1 || pd > 3) {
			printf("Такой двери нет.\n");
		}
		else if (md == pd) {
			printf("Монстр увидел, что вы зашли и он вас съел!\n");
		}
		else {
			printf("Вам удалось проскочить мимо монстра, двигайтесь дальше.\n");
			md = rand() % 2 + 1;
			printf("Выберите вашу дверь ( от 1 до 2 )\n");
			scanf_s("%d", &pd);
			if (pd < 1 || pd > 2) {
				printf("Такой двери нет.\n");
			}
			else if (md == pd) {
				printf("Вы проиграли, вас схватил монстр.\n");
			}
			else {
				printf("Поздравляю, вы прошли все уровни! Вы молодец!\n");
				return 0;
			}
		}
	}
	return 1;
}