/*
	-- 원래는 약수들 다 리스트 값에 넣어서 파이썬 풀 듯 푸려 했었음.
	1. for문 돌려서 약수들 파악하기
	2. 몇 번째인지 나타낼 변수 하나 설정해서 1부터 늘리기.
	3. 2번의 변수의 값이 K와 같을 경우 그 때 값을 출력
	4. K가 약수 갯수보다 높을 경우 조건문 작성.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int N, K;
	int limit = 0;
	scanf("%d %d", &N, &K);

	for (int num = 1; num <= N; num++)
	{
		if (N % num == 0)
		{
			limit++;
		}
		if (limit == K)
		{
			printf("%d", num);
			break;
		}
	}
	if (limit < K)
	{
		printf("0");
	}
	return 0;
}
