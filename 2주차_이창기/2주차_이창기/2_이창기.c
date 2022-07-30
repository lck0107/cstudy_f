/*
	1. 문자열 gets()로 입력
	2. 띄어쓰기별로 토큰 나누기
	3. 토큰별로 띄어쓰기 없이 출력. (puts 대신 printf 사용)
	4. 출력.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char arr[100001];
	char* p = NULL;
	
	gets(arr);
	p = strtok(arr, " ");

	while (p != 0) {
		printf("%s", p);
		p = strtok(NULL, " ");
	}

	return 0;
}