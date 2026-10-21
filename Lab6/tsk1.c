#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int tsk1() {
	int years;
	printf("Ââåäèòå ãîä ");
	scanf("%d", &years);
	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0) {
		printf("Ãîä %d âèñîêîñíûé\n", years);
	}
	else printf("Ãîä %d íå âèñîêîñíûé\n", years);
}

int tsk2() {
	//x^2 ïðè x<=x<=3   F(x)=4 ïðè x>3 èëè x<0
	//x=2 F(x)=2^2      x=4 èëè x=-1 F(x)=4

	int x;
	printf("\nÂâåäèòå õ ");
	scanf("%d", &x);
	if (x >= 0 && x <= 3) {
		printf("F(x)=%d\n", x * x);
	}
	else printf("F(x)=4\n");
}

int tsk3() {
	int N;
	printf("\nÂâåäèòå ÷èñëî ");
	scanf("%d", &N);
	int num1 = N % 10;
	int num2 = (N / 10) % 10;
	int num3 = N / 100;
	int sum = num1 + num2 + num3;
	if (sum >= 10 && sum <= 99) {
		printf("Ñóììà öèôð %d äâóçíà÷íîå ÷èñëî\n", sum);
	}
	else printf("Ñóììà öèôð %d íå äâóçíà÷íîå ÷èñëî\n", sum);
}

int hmwk6(){ //вариант 7
	int x, y;
	printf("\nÂâåäèòå êîîðäèíàòû òî÷êè (x y): ");
	scanf("%d %d", &x, &y);
	int belongs = (x * x + y * y <= 4) && (x >= 0) && (y >= x);
	if (belongs) {
		printf("Òî÷êà (%d, %d) ïðèíàäëåæèò çàøòðèõîâàííîé îáëàñòè\n", x, y);
	}
	else printf("Òî÷êà (%d, %d) íå ïðèíàäëåæèò çàøòðèõîâàííîé îáëàñòè\n", x, y);
}



int main() {
	setlocale(LC_CTYPE, "rus");
	tsk1();
	tsk2();
	tsk3();
	hmwk6();
}




