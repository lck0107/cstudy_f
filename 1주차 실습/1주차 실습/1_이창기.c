#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N; // N 변수 선언
	scanf("%d", &N); // 입력받은 값을 N 변수 주머니로 이동.

	if(N%2==0) // N을 2로 나누었을 때 나머지값이 0이라면 (짝수라면)
		printf("even \n"); // 짝수 일 경우 출력값.
	else
		printf("not even \n"); //짝수가 아닐 때 출력값.
	
	return 0;
}

