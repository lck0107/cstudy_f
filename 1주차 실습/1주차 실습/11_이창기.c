/*
	10���� �ٸ� �� : x��° �࿡�� �Է¹��� �� n-x ��ŭ�� ������ �ʿ���. / �� ������ x���� �ƴ� 2x-1�� �ٸ�.
	(n=4�� ���)
	row 1 : ��ĭ��� �� 1��
	row 2 : ��ĭ��� �� 3��
	row 3 : ��ĭ��� �� 5��
	row 4 : 0ĭ��� �� 7��
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	
	for(int row = 1; row <= n; row++)
	{
		for (int tab = 1; tab <= n - row; tab++)
			printf(" ");
		for (int star = 1; star <= 2 * row -1 ; star++) // x�� �ݺ��ϰ� ���� ��� -> for (����-���� 1; �ݺ��ϰ� ���� Ƚ��; ����++)
			printf("*");
		printf("\n");
	}
	return 0;
}

