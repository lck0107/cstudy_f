/*
	1. gets() 함수로 문자열 A, B 입력받기.
	2. A에서 B의 위치 찾기.
	3. 위치 있으면 yes 없으면 NO 출력하게 만들기.
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