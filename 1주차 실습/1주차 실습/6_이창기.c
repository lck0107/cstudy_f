/*
	1. ���� 3�� ���� (a,b,c) �� �Է¹ޱ�
	2. a~b���� �ݺ��� ������
		c�� �������°�?(�������� 0�ΰ�) -> �������� ���ڸ� �˷��� ����(num) �� �� �� ����.
	3. num �� ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b, c;
	int num = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= b)
	{
		for (int i = a; i <= b; i++)
		{
			if (i % c == 0)
			{
				num++;
			}
		}
	}										// ó���� ��������� �����µ�, a�� b���� ū ��� ��� ���ؼ� �ؿ� else if �� �߰�.
	else if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			if (i % c == 0)
			{
				num++;
			}
		}
	}
	printf("%d", num);
	return 0;
}