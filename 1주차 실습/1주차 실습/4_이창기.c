/*
	�Ҽ� = ����� 1�� �ڱ� �ڽŹۿ� ���� ��.
	-> �ݺ��������� 2���� �ڱ��ڽű��� �������� �� �� ���̶� �������� ������ �Ҽ��� �ƴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n, check=1;
	scanf("%d", &n);
	for (int num = 2; num < n; num++) // num<n���� �����Ǽ� ��¼�ٺ��� 2�� for���� ��ġ�� �ʴ� �ٶ��� check���� 1�� �����Ǿ� �Ҽ��� ����� �Ǻ��Ǿ���.
	{
		if (n % num == 0)
		{
			check = 0;
			break;
		}
	}
	if (check == 0)			// ���� 14�ٿ� printf("NO")�� ���� for������ �������� �� �ؿ� prinf('YES')�� ������ �Ϸ� ������, �Ҽ��� �ƴѰ�� NOYES�� ��µǴ� ���� �߻�.
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}
