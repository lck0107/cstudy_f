/*
	1. �ݺ��� ���� �Է� 81�� ���� �� ���� �迭([��],[��])�� ����.
	2. ���ǹ� �񱳸� ���� �ִ񰪰� �� �� [��], [��] �� ��������.
	3. �� �ܰ迡�� ����� �ִ� ��� \n �� �� ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, arr[10][10], max=-1, row = -1, column = 0; // �����׽�Ʈ������ �Է� �� 0�� �����ϴٰ� �ؼ� max ���̶� row �� 0���� -1�� ��������.
	for (i = 1; i <= 9; i++) 
	{
		for (j = 1; j <= 9; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > max)		//16��~20�ٱ����� 2������
			{
				max = arr[i][j];
				row = i;
				column = j;
			}
		}
	}
	
	printf("%d\n%d %d", max, row, column);		// 3��
	return 0;
}