/*
	1��	(row1)
	2��	(row2)
	3�� (row3) .....
	n��	(row n)���� ��ǥ��

	�� row x ���� x��ŭ *�� ǥ�õǵ��� �ݺ�. -> for(int star=1; star<=row; star++)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int row = 1; row <= n; row++)
	{
		for (int star=1; star<=row; star++)
			printf("*");
		printf("\n");
	}
	return 0;
}