/*
	숫자를 S 변수로 지정한 뒤 계속 증가하게 하고 반복문 써서 시계방향으로 다 넣어둠.
	K 값 찾아서 위치 출력 (만약 k가 C*R 보다 크면 0출력)
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int arr[1002][1002] = { 0,0 };	// main에 데이터 많아서 뭐 옮기라는 뭐시기 오류떠서 전역변수로 선언했더니 해결.

int main(void) {
	int S = 1, i, j, C, R, K, x=0, y=0, n, num=0; //가로가 R, 세로가 C (예제 : 7,6)

	scanf("%d%d", &R, &C);
	scanf("%d", &K);

	// 시계방향대로 순서 넣는 함수. 각 반복문에서 숫자가 R*C 까지만 출력되게 하기 위해 조건문을 넣었다.
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
	
	/* //출력 테스트
	for (int a = 1; a <= C; a++) {
		for (int b = 1; b <= R; b++) {
			printf("%d", arr[a][b]);
		}
		printf("\b\n");
	}
	*/

	
	// 출력
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