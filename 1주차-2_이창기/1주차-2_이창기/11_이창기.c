/*
	���ڸ� S ������ ������ �� ��� �����ϰ� �ϰ� �ݺ��� �Ἥ �ð�������� �� �־��.
	K �� ã�Ƽ� ��ġ ��� (���� k�� C*R ���� ũ�� 0���)
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int arr[1002][1002] = { 0,0 };	// main�� ������ ���Ƽ� �� �ű��� ���ñ� �������� ���������� �����ߴ��� �ذ�.

int main(void) {
	int S = 1, i, j, C, R, K, x=0, y=0, n, num=0; //���ΰ� R, ���ΰ� C (���� : 7,6)

	scanf("%d%d", &R, &C);
	scanf("%d", &K);

	// �ð������ ���� �ִ� �Լ�. �� �ݺ������� ���ڰ� R*C ������ ��µǰ� �ϱ� ���� ���ǹ��� �־���.
	for (n = 0; n <= R * C; n++) {
		for (i = C - n; i >= 1 + n; i--) {
			if (S <= R * C) {
				arr[i][1 + n] = S;
				S++;
			}
		}

		for (j = 2 + n; j <= R - n; j++) {
			if (S <= R * C) {
				arr[1 + n][j] = S;
				S++;
			}
		}

		for (i = 2 + n; i <= C - n; i++) {
			if (S <= R * C) {
				arr[i][R - n] = S;
				S++;
			}
		}

		for (j = R - 1- n; j > 1 + n; j--) {
			if (S <= R * C) {
				arr[C - n][j] = S;
				S++;
			}
		}
	}
	
	/* //��� �׽�Ʈ
	for (int a = 1; a <= C; a++) {
		for (int b = 1; b <= R; b++) {
			printf("%d", arr[a][b]);
		}
		printf("\b\n");
	}
	*/

	
	// ���
	for (int a = 1; a <= C; a++) {
		for (int b = 1; b <= R; b++) {
			if (arr[a][b] == K) {
				x = b;
				y = C - a +1 ;
			}
		}
	}

	if (K <= C * R) {
		printf("%d %d", x, y);
	}
	else
	{
		printf("%d",num);
	}

	return 0;
}