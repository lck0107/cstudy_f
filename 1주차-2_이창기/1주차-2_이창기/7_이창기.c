/*
	1. 10열 0,0선언
	2. N 입력받아서 반복문 돌리기
	3. i로 행,열 따로 만들어서 1이면 0, 0이면 1로 만들기. (겹치는 부분은 [i][i]는 if else로 따로 처리
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
	// 출력
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\b\n");
	}
		return 0;
}