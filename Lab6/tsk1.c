#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int tsk1(int years) {
	return(years % 4 == 0 && years % 100 != 0) || (years % 400 == 0);
}

double tsk2(double X) {
	//x^2 при x<=x<=3   F(x)=4 при x>3 или x<0
	//x=2 F(x)=2^2      x=4 или x=-1 F(x)=4
	return(X >= 0 && X <= 3) ? (X * X) : 4; //условие ? истина : ложь
}

int tsk3(int N) {
	int num1 = N % 10;
	int num2 = (N / 10) % 10;
	int num3 = N / 100;
	return num1 + num2 + num3;
}

int hmwk6(int x, int y){ //вариант 7
	return (x * x + y * y <= 4) && (x >= 0) && (y >= x) ? 1 : 0;

}

int main() {
	setlocale(LC_CTYPE, "rus");
	//Задание 1
	int years;
	printf("Введите год: ");
	scanf("%d", &years);
	if (tsk1(years)) {
		printf("Год %d високосный\n", years);
	}
	else {
		printf("Год %d не високосный\n", years);
	}

	//Задание 2
	double X;
	printf("Введите х: ");
	scanf("%lf", &X);
	double res = tsk2(X);
	printf("F(x)=%lf\n", res);

	//Задание 3
	int N;
	printf("\nВведите трёхзначное число: ");
	scanf("%d", &N);
	int sum = tsk3(N);
	if (sum >= 10 && sum <= 99) {
		printf("Сумма цифр %d - двузначное число\n", sum);
	}
	else printf("Сумма цифр %d - не двузначное число\n", sum);

	//Дз вариант 7
	int x, y;
	printf("\nВведите координаты точки (x, y) через пробел: ");
	scanf("%d %d", &x, &y);
	if (hmwk6(x,y)) {
		printf("Точка (%d, %d) принадлежит заштрихованной области\n", x, y);
	}
	else printf("Точка (%d, %d) не принадлежит заштрихованной области\n", x, y);
}
