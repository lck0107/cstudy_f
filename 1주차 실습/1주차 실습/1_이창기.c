#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N; // N ���� ����
	scanf("%d", &N); // �Է¹��� ���� N ���� �ָӴϷ� �̵�.

	if(N%2==0) // N�� 2�� �������� �� ���������� 0�̶�� (¦�����)
		printf("even \n"); // ¦�� �� ��� ��°�.
	else
		printf("not even \n"); //¦���� �ƴ� �� ��°�.
	
	return 0;
}

