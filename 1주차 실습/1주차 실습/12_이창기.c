/*
	�Ҽ��� 4������ �ߴ� ��ó��, �ݺ��� ������ 2~�ڱ��ڽ�-1 ���� ������ �������� 0�� �� ���̶� ����� �Ҽ��� �ƴϴ�.
	�ٸ� ���� �ݺ����� �ϳ� �� ����� �Է¹��� ���� N���� M���� �ݺ��ǵ��� �ϰ�,
	��°���� YES,NO�� �ƴ� num ���� �� ��ü�� ������ִ� ���̴�.
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
		if (num>1 && check == 1)		//4�������� check�� 0�� ��� NO, 1�� ��� YES�� ǥ���ߴ�.
		{
			printf("%d ", num);
		}
	}

	return 0;
}