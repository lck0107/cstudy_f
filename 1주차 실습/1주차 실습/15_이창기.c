/*
	1. 일단 11번에서 했던대로 별피라미드처럼 만들기. (줄 반복문 > 줄 속 내용 반복문 중 빈칸 / 내용 반복문 중 내용)
	2. 그 후 내용 변경
		2-1) 짝수행 순서대로 (숫자 S 그대로)
		2-2) 홀수행 거꾸로  (숫자 S를 일단 담은 뒤 반복문통해 반대 역순으로 출력)

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N, S, tmp[200] = { 0 };
	scanf("%d%d", &N, &S);

	for (int row = 1; row <= N; row++)
	{
		for (int i = 1; i <= N - row; i++)
		{
			printf(" ");
		}
		//홀수줄
		if (row % 2 == 1) 
		{
			for (int j = 1; j <= 2 * row - 1; j++)
			{
				tmp[j] = S;						// **********중요: 밑에서 역순으로 돌리기 위해 임시로 배열에 저장해둠.
				S++;
				if (S == 10)
				{
					S = 1; // 10이 되면 1로 바꾼다고 했으므로
				}
			}
			for (int p = 2 * row - 1; p >= 1; p--)
			{
				printf("%d", tmp[p]);
			}
		}
		//짝수줄
		else
		{
			for (int j = 1; j <= 2 * row - 1; j++)
			{
				printf("%d", S);
				S++;
				if (S == 10)
				{
					S = 1; // 10이 되면 1로 바꾼다 했으므로
				}
			}
		}
		printf("\n");
	}

	return 0;
}