/*
	1. N�� �����ϰ� �Է¹޴´�.
	2. N���� ���� ���� �ݺ��� ������.
	3. �ݺ��� �ȿ��� ���ǹ����� N���� ũ�ų� ���� ��츦 ������ ��  ������ ������ְ� break�� Ż���Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		if (i * i >= N)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}