/*
	1. 문자열 gets()로 입력.
	2. strlen()부터 감소하는 반복문 만들어 역순으로 출력.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char arr[1001] = { 0 };
	gets(arr);
	for (int i = strlen(arr)-1; i >= 0; i--) {
		printf("%c", arr[i]);
	}

	return 0;

}