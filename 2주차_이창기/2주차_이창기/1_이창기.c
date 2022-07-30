/*
	1. gets() 함수 써서 문자열 받기.
	2. 아스키코드 기준으로 대문자 소문자 나눠서 조건문 만들기.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char arr[1001]={0};

	//1. 문자열 받기
	gets(arr);

	//2. 아스키코드 기준으로 대문자 소문자 나눠서 조건문 만들기.
	for (int i = 0; i < 1001; i++) {
		if (arr[i] <= 90 && arr[i] >= 65) {
			arr[i] += 32;
		}
		else if (arr[i] >= 97 && arr[i] <= 122) {
			arr[i] -= 32;
		}
	}

	//3. 출력
	puts(arr);

	return 0;

}