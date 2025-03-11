#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num = 0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	for (int i = 0; i < 32; ++i) {
		if (i % 4 == 0 && i != 0)
			putchar(' ');
		if (num & (1 << (31 - i)))
			putchar('1');
		else
			putchar('0');
	}
	putchar('\n');

	return 0;
}