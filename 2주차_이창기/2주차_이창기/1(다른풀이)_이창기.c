/*
	1. gets() �Լ��� ���ڿ� �Է¹ޱ�.
	2. �迭 �ȿ��� �� ���� ���찡�� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ������.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(void) {
	char arr[1001];
	char* p = NULL;
	int i, len, result1, result2;

	gets(arr);
	len = strlen(arr);

	for (i = 0; i < len; i++) {
		result1 = islower(arr[i]);	//islower �� �迭 �߰������� �۵� ���ϴ� �� ��.
		result2 = isupper(arr[i]);

		if (result1==1) {
			p = _strupr(arr);
			puts(p);
			p = NULL;
		}
		else if (result2==1) {
			p = _strlwr(arr);
			printf("%s", p);
			p = NULL;
		}
	}
	return 0;
}

