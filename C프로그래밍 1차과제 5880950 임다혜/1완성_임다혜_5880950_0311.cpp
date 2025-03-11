#define _CRT_SECURE_NO_WARNINGS //scanf,printf 함수 사용시 발생하는 보안경고 비활성화
#include<stdio.h>// 표준 입출력 함수 라이브러리

int main() {
	int num = 0; //입력받을 변수 num선언
	printf("정수를 입력하세요 : ");//메시지 출력
	scanf("%d", &num);//정수 입력받기
	for (int i = 0; i < 32; ++i) {//32번 반복문
		//num의 각 비트를 차례로 확인하고 출력
		if (num & (1 << (31 - i)))
			putchar('1');
		else
			putchar('0');
	}
	putchar('\n');

	return 0;
}