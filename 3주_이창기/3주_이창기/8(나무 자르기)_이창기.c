/*
	1. 반복문 N번만큼 돌려서 남은 수 받기.
	2. M보다 적으면 높이 1 증가.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int N, M;
int num;
int* p = NULL;
int arr[1000005];

void Hcheck(int arr, int height, int need) {
	num = 0;  
	for (int i = 0; i < N; i++) {
		if (*(p+i)>height) num += (*(p+i) - height);	// 조건문 설정 안하면 -값도 계산되어 오류뜸.
	}
	if (num < need) {
		printf("%d",height - 1);
		return;
	}
	else Hcheck(arr, height + 1, need);
}


int main(void) {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	p = arr;

	Hcheck(arr,0,M);
	return 0;
}