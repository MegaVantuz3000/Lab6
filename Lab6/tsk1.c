#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int tsk1() {
	int years;
	printf("Введите год ");
	scanf("%d", &years);
	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0) {
		printf("Год %d високосный\n", years);
	}
	else printf("Год %d не високосный\n", years);
}

int tsk2() {
	//x^2 при x<=x<=3   F(x)=4 при x>3 или x<0
	//x=2 F(x)=2^2      x=4 или x=-1 F(x)=4

	int x;
	printf("\nВведите х ");
	scanf("%d", &x);
	if (x >= 0 && x <= 3) {
		printf("F(x)=%d\n", x * x);
	}
	else printf("F(x)=4\n");
}

int tsk3() {
	int N;
	printf("\nВведите число ");
	scanf("%d", &N);
	int num1 = N % 10;
	int num2 = (N / 10) % 10;
	int num3 = N / 100;
	int sum = num1 + num2 + num3;
	if (sum >= 10 && sum <= 99) {
		printf("Сумма цифр %d двузначное число\n", sum);
	}
	else printf("Сумма цифр %d не двузначное число\n", sum);
}

int hmwk6(){
	int x, y;
	printf("\nВведите координаты точки (x y): ");
	scanf("%d %d", &x, &y);
	int belongs = (x * x + y * y <= 4) && (x >= 0) && (y >= x);
	if (belongs) {
		printf("Точка (%d, %d) принадлежит заштрихованной области\n", x, y);
	}
	else printf("Точка (%d, %d) не принадлежит заштрихованной области\n", x, y);
}



int main() {
	setlocale(LC_CTYPE, "rus");
	tsk1();
	tsk2();
	tsk3();
	hmwk6();
}




