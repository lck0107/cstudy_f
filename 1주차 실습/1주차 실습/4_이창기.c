/*
	소수 = 약수가 1과 자기 자신밖에 없는 것.
	-> 반복문돌려서 2부터 자기자신까지 나누었을 때 한 번이라도 나머지가 없으면 소수가 아님.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n, check=1;
	scanf("%d", &n);
	for (int num = 2; num < n; num++) // num<n으로 설정되서 어쩌다보니 2는 for문을 거치지 않는 바람에 check값이 1이 유지되어 소수로 제대로 판별되었다.
	{
		if (n % num == 0)
		{
			check = 0;
			break;
		}
	}
	if (check == 0)			// 원래 14줄에 printf("NO")를 적어 for문에서 마무리한 뒤 밑에 prinf('YES')로 마무리 하려 했으나, 소수가 아닌경우 NOYES가 출력되는 오류 발생.
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}
