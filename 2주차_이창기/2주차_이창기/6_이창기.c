/*
	1. gets() �Լ��� ���ڿ� A, B �Է¹ޱ�.
	2. A���� B�� ��ġ ã��.
	3. ��ġ ������ yes ������ NO ����ϰ� �����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char A[1001], B[1001];
	char* p = NULL;

	gets(A);
	gets(B);
	p = strstr(A, B);
	if (p != NULL)	printf("YES");
	else
	{
		printf("NO");
	}


	return 0;
}