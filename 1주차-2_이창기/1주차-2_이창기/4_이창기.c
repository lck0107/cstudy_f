/*
	1. 맵 크기 입력받기 (N * N 크기의 2차원 형태 / N은 6이상 100이하의 짝수)
	2. 맵 크기 만큼 2차원 배열 만들어 수 집어넣기.
	3. 유닛의 위치 X(행), Y(열), R(사거리) 입력받고, X,Y 위치에 'x' 값 넣기.
	4. 사거리 표시하기 (어떻게 해야할까)

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N,i,j,arr[102][102];
	int X, Y, R;
	// 맵 크기 입력받고 0으로 일단 다 채워넣기.
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			arr[i][j] = 0;
		}
	}

	// 유닛의 위치, 사거리 받기.
	scanf("%d%d%d", &X, &Y, &R);
	arr[X][Y] = -1;	// 위치 부분 일단 -1로 표시.

	// 유닛 사거리 표시
	/*
	[X+1][Y](i=1,j=0)
	[X(1-1)][Y+1] (i=1,j=1)

	[X+2(2-0)][Y] (i=2,j=0)
	[X+1(2-1)][Y+1] (i=2,j=1)
	[X][Y+2] (i=2,j=2)

	-> 이럴 경우 한사분면만 출력 되는데 이걸 부호 바꿔서 4번 해주면 4분면에 모두 표시됨.
	*/

	for (i = 1; i <= R; i++){
		for (j = 0; j <= i; j++) {
			arr[X + i - j][Y + j] = i;
			arr[X + i - j][Y - j] = i;
			arr[X - i + j][Y + j] = i;
			arr[X - i + j][Y - j] = i;
		}
	}
	

	//출력
	for(i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (arr[i][j] == -1) {
				printf("x ");
			}
			else {
				printf("%d ", arr[i][j]);
			}
		}
		printf("\b\n");
	}

	return 0;
}