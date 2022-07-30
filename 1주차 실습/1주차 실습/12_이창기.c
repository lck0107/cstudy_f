/*
	소수는 4번에서 했던 것처럼, 반복문 돌려서 2~자기자신-1 까지 돌려서 나머지가 0이 한 번이라도 생기면 소수가 아니다.
	다른 점은 반복문을 하나 더 만들어 입력받은 변수 N부터 M까지 반복되도록 하고,
	출력결과를 YES,NO가 아닌 num 변수 그 자체로 출력해주는 것이다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n, m, check;
	scanf("%d %d", &n, &m);
	for (int num = n; num <= m; num++)
	{
		check = 1;
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				check = 0;
				break;
			}
		}
		if (num>1 && check == 1)		//4번에서는 check가 0인 경우 NO, 1인 경우 YES로 표시했다.
		{
			printf("%d ", num);
		}
	}

	return 0;
}