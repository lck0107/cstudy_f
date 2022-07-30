/*
	1. 몇 문제인지 값 받기 (변수 N에 저장)
	2. 문제 수만큼 반복
		틀리면 -> score 1점으로 초기화.
		맞으면 -> total 값에 score 값 더하고, score 값은 1 증가
*/

#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
int main(void)
{
	int N, num;
	int score = 1, total = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);	//scanf_s 개념 다시 공부하기(반복)
		if (num == 0)
		{
			score = 1;
		}
		else
		{
			total = total + score;
			score++;
		}
	}
	printf("%d", total);

	return 0;
}