/*
	1. gets() �Լ� �Ἥ ���ڿ� �ޱ�.
	2. �ƽ�Ű�ڵ� �������� �빮�� �ҹ��� ������ ���ǹ� �����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char arr[1001]={0};

	//1. ���ڿ� �ޱ�
	gets(arr);

	//2. �ƽ�Ű�ڵ� �������� �빮�� �ҹ��� ������ ���ǹ� �����.
	for (int i = 0; i < 1001; i++) {
		if (arr[i] <= 90 && arr[i] >= 65) {
			arr[i] += 32;
		}
		else if (arr[i] >= 97 && arr[i] <= 122) {
			arr[i] -= 32;
		}
	}

	//3. ���
	puts(arr);

	return 0;

}