/*
	1. ü���� ����(����)�ϰ�, �Է°� �޾Ƽ� ��ġ��Ű��.
	2. ���� Ư�� ��ġ(X,Y)������� ���� ���̳� ���� ���� ŷ(1)�� �ִ��� �Ǻ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int arr[10][10] = { { 0,0 } };	//ü���� 8X8
	int i, j, k, result=0;
	// �Է°� �ް� �⹰�� ��ġ
	for (i = 1; i <= 8; i++) {
		for (j = 1; j <= 8; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	// 2�� ����
	for (i = 1; i <= 8; i++) {
		for (j = 1; j <= 8; j++) {
			if (arr[i][j] == 2) {
				for (k = 1; k < j; k++) {
					if (arr[i][j - k] == 3)	break;
					else if (arr[i][j - k] == 1)	result = 1;
				}
				for (k = 1; k <= 8 - j; k++) {
					if (arr[i][j + k] == 3)	break;
					else if (arr[i][j + k] == 1)	result = 1;
				}
				for (k = 1; k <= 8 - i; k++) {
					if (arr[i+k][j] == 3)	break;
					else if (arr[i+k][j] == 1)	result = 1;
				}
				for (k = 1; k < i; k++) {
					if (arr[i-k][j] == 3)	break;
					else if (arr[i - k][j] == 1)	result = 1;
				}
			}
		}
	}


	//���
	if (result == 1)	printf("%d", result);
	else printf("0");

	return 0;
}

// 8�� �Űܳ��� ��
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j, k, l, arr[7][7], arr2[7][7], tmp[7][7]; // ���� �ߺ��Ǽ� ������ �ʵ��� tmp �迭 �������� �ϳ� �� ����.
	int x, y, bingo = 0;
	// 1,2�� ����
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	// 3�� (�ѿ� �� �ݺ����� �Ҹ� �� , ���� �� �ݺ����� ������ ��)
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			// �Ҹ� ���� ���� �� üũ ���� (���� �ݺ���)
			for (k = 1; k <= 5; k++) {
				for (l = 1; l <= 5; l++) {
					if (arr2[i][j] == arr[k][l]) {
						arr[k][l] = -1;
					}
					if (arr[1][l] == -1 && arr[2][l] == -1 && arr[3][l] == -1 && arr[4][l] == -1 && arr[5][l] == -1 && tmp[0][l] != -1) {
						tmp[0][l] = -1;
						bingo++;
					}
				}
				if (arr[k][1] == -1 && arr[k][2] == -1 && arr[k][3] == -1 && arr[k][4] == -1 && arr[k][5] == -1 && tmp[k][0] != -1) {
					tmp[k][0] = -1;
					bingo++;
				}
				if (arr[1][1] == -1 && arr[2][2] == -1 && arr[3][3] == -1 && arr[4][4] == -1 && arr[5][5] == -1 && tmp[1][1] != -1) {
					tmp[1][1] = -1;
					bingo++;
				}
				if (arr[1][5] == -1 && arr[2][4] == -1 && arr[3][3] == -1 && arr[4][2] == -1 && arr[5][1] == -1 && tmp[2][2] != -1) {
					tmp[2][2] = -1;
					bingo++;
				}
				if (bingo == 3) {
					x = i;
					y = j;
				}
			}
		}
	}


	// ���
	printf("%d", 5 * (x - 1) + y);

	return 0;
}
*/