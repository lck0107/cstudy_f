/*
	1. �ݺ��� N����ŭ ������ ���� �� �ޱ�.
	2. M���� ������ ���� 1 ����.
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
		if (*(p+i)>height) num += (*(p+i) - height);	// ���ǹ� ���� ���ϸ� -���� ���Ǿ� ������.
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