/*
	-- ������ ����� �� ����Ʈ ���� �־ ���̽� Ǯ �� Ǫ�� �߾���.
	1. for�� ������ ����� �ľ��ϱ�
	2. �� ��°���� ��Ÿ�� ���� �ϳ� �����ؼ� 1���� �ø���.
	3. 2���� ������ ���� K�� ���� ��� �� �� ���� ���
	4. K�� ��� �������� ���� ��� ���ǹ� �ۼ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int N, K;
	int limit = 0;
	scanf("%d %d", &N, &K);

	for (int num = 1; num <= N; num++)
	{
		if (N % num == 0)
		{
			limit++;
		}
		if (limit == K)
		{
			printf("%d", num);
			break;
		}
	}
	if (limit < K)
	{
		printf("0");
	}
	return 0;
}
