/*
	1. gets() 함수로 문자열 입력받기.
	2. 배열 안에서 한 개씩 살펴가며 대문자는 소문자로, 소문자는 대문자로 변ㄱ경.
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
		result1 = islower(arr[i]);	//islower 이 배열 중간에서는 작동 안하는 듯 함.
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

