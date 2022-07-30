/*
	1. 반복문 통해 입력 81개 받은 뒤 이중 배열([행],[열])에 저장.
	2. 조건문 비교를 통해 최댓값과 그 때 [행], [열] 값 변수지정.
	3. 전 단계에서 저장된 최댓값 출력 \n 행 열 출력.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, arr[10][10], max=-1, row = -1, column = 0; // 백준테스트에서는 입력 값 0도 가능하다고 해서 max 값이랑 row 값 0에서 -1로 변경해줌.
	for (i = 1; i <= 9; i++) 
	{
		for (j = 1; j <= 9; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > max)		//16줄~20줄까지가 2번과정
			{
				max = arr[i][j];
				row = i;
				column = j;
			}
		}
	}
	
	printf("%d\n%d %d", max, row, column);		// 3번
	return 0;
}