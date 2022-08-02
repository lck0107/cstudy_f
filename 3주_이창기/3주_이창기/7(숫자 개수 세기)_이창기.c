/*
	1. ����Ž������ Ž�� �� ������ cnt ����.
	2. num�� arr��ü �������� ���� �� Ż��.
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