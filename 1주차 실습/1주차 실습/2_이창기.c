/*
	1. �� ���� ����� ���� ��. -> �ݺ��� 3�� ������
    2. ������ �ݺ������� a,b,c,d ���� �ް�, �տ� ���� ���ǹ��� �ۼ��Ͽ� ��°� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int N,a,b,c,d;
    int sum;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum = a + b + c + d;
        if (sum == 0)
            printf("D\n");
        else if (sum == 1)
            printf("C\n");
        else if (sum == 2)
            printf("B\n");
        else if (sum == 3)
            printf("A\n");
        else
            printf("E\n");
    }
}