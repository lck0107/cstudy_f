/*
	1. ���� �л��� �Է¹ޱ�. (3�̻� 1000����)
	2. �� �ݿ� ���ߴ��� �л����� ��, ��(���� 5�г�����̹Ƿ� 5�� ����)��ŭ �Է¹ް� ���߹迭�� ����. (1~9 ����)
	3. ���ǹ��� ���� �л����� ���ؼ� ���� �� �� �� ���� ��� student[1] ++ �� �߰�.
	4. stduent[] �迭 �ȿ� �ִ� ���ڵ��� ���Ͽ� ���� ���� ���� ���� �л� �� ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N, i, j, k, max = 0, president = 1; // ��δ� ���� ���� ���� �ʾ��� ��� 1���л��� �����̹Ƿ� president ���� 0���� �ϸ� ����ó����.
	int student[1002];
	int tmp[1002][7];
	scanf("%d", &N);

	// 2. ǥó�� �� �Է¹޾Ƽ� ���߹迭�� ����.
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			scanf("%d", &tmp[i][j]);
		}
	}
	
	// 3. ���� �� ���� �ִ��� ������ �Ǵ��ϱ�. �� �� ������ student[i]�� ����.
	for (i = 1; i <= N; i++)
	{
		student[i] = 0;
		for (j = 1; j <= N; j++)
		{
			if (j != i)
			{
				for (k = 1; k <= 5; k++)
				{
					if (tmp[i][k] == tmp[j][k])
					{
						student[i]++;
						break;
					}
				}
			}
		}
	}

	// 4.student[i] ������ �� ���ؼ� ���� ���� ���� ���� �л��� ������ ���.
	for (i = 1; i <= N; i++)
	{
		if (student[i] > max)
		{
			max = student[i];
			president = i;
		}
	}
	printf("%d", president);
	return 0;
}