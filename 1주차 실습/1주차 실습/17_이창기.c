/*
	규칙
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N,num,s=0;
	scanf("%d", &N);
	for (int row = N; row >= 1; row--)  //row 는 줄에 표시되는 숫자 갯수.
	{
		num = 0;
		for (int j = 1; j <= N + 1 - row; j++)  // 2. 새로 추가한 부분 (줄의 시작) -- 세로줄
		{
			num = num + j;
		}

		for (int i = 1; i <= row; i++)
		{
			printf("%d ", num);
			num = num + i + s;				// 3. 첫 줄은 첫 숫자 부터 1,2,3씩 증가, 둘째 줄은 2,3,4씩, 셋째줄은 3,4,5씩 증가하여 변수 s를 세로 만들어줌.
		}									// 1. 처음에 여기까지 했는데, 첫 번째 줄까지는 괜찮은데, 두 번째 줄 시작숫자가 이상해서 오답임. -- 가로줄
		printf("\n");
		s = s + 1;
	}
}