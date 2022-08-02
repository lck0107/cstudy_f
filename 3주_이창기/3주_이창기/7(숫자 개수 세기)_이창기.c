/*
	1. 순차탐색으로 탐색 후 맞으면 cnt 증가.
	2. num이 arr전체 갯수보다 많을 떄 탈출.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n, q;
int arr[100001];
int arr2[100001];

void Lsearch(int arr[], int num, int target, int cnt) {
	if (num >= n) {
		printf("%d\n", cnt);
		return;
	}
	else {
		if (target == arr[num])	Lsearch(arr, num + 1, target, cnt + 1);
		else Lsearch(arr, num + 1, target, cnt);
	}
}



int main(void) {
	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < q; j++) {
		scanf("%d", &arr2[j]);
	}
	for (int j = 0; j < q; j++) {
		Lsearch(arr, 0, arr2[j], 0);
	}
	return 0;
}