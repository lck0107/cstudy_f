/*
	1. 10�� 0,0����
	2. N �Է¹޾Ƽ� �ݺ��� ������
	3. i�� ��,�� ���� ���� 1�̸� 0, 0�̸� 1�� �����. (��ġ�� �κ��� [i][i]�� if else�� ���� ó��
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int i, j, N, arr[12][12] = { 0,0 };

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= 10; j++) {
			if (i != j) {
				if (arr[i][j] == 0)	arr[i][j] = 1;
				else if (arr[i][j] == 1)	arr[i][j] = 0;
				if (arr[j][i] == 0)	arr[j][i] = 1;
				else if (arr[j][i] == 1)	arr[j][i] = 0;
			}
			else {
				if (arr[i][j] == 0)	arr[i][j] = 1;
				else if (arr[i][j] == 1)	arr[i][j] = 0;
			}
		}
	}
	// ���
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\b\n");
	}
		return 0;
}