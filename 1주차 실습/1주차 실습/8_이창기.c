/*
	a �������� 
	a�� b,c���� ��� ũ�ų� ������ -> max = a
	a�� b���� �۰ų� c���� ���� �� -> b,c �񱳸� ���� ū ���� max ��.
	a�� b,c �Ѵ� ���� ���� �� -> b,c �񱳸� ���� max ��.

	���� a�� b,c���� ��� ũ�ų� ���� ��� / �׷��� ���� ���� ������ ��.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b, c;
	int max;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		max = a;
	}
	else
	{
		if (b >= c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	printf("%d", max);
	return 0;
}