#define _CRT_SECURE_NO_WARNINGS //scanf,printf �Լ� ���� �߻��ϴ� ���Ȱ�� ��Ȱ��ȭ
#include<stdio.h>// ǥ�� ����� �Լ� ���̺귯��

int main() {
	int num = 0; //�Է¹��� ���� num����
	printf("������ �Է��ϼ��� : ");//�޽��� ���
	scanf("%d", &num);//���� �Է¹ޱ�
	for (int i = 0; i < 32; ++i) {//32�� �ݺ���
		//num�� �� ��Ʈ�� ���ʷ� Ȯ���ϰ� ���
		if (num & (1 << (31 - i)))
			putchar('1');
		else
			putchar('0');
	}
	putchar('\n');

	return 0;
}