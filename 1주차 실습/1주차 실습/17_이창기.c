/*
	��Ģ
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N,num,s=0;
	scanf("%d", &N);
	for (int row = N; row >= 1; row--)  //row �� �ٿ� ǥ�õǴ� ���� ����.
	{
		num = 0;
		for (int j = 1; j <= N + 1 - row; j++)  // 2. ���� �߰��� �κ� (���� ����) -- ������
		{
			num = num + j;
		}

		for (int i = 1; i <= row; i++)
		{
			printf("%d ", num);
			num = num + i + s;				// 3. ù ���� ù ���� ���� 1,2,3�� ����, ��° ���� 2,3,4��, ��°���� 3,4,5�� �����Ͽ� ���� s�� ���� �������.
		}									// 1. ó���� ������� �ߴµ�, ù ��° �ٱ����� ��������, �� ��° �� ���ۼ��ڰ� �̻��ؼ� ������. -- ������
		printf("\n");
		s = s + 1;
	}
}