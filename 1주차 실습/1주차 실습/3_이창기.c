#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N,i,sum=0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return 0;
}
