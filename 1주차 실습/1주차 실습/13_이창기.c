/*
	1. �����ϴ� �ο��� �ޱ� (���� N)
	2. N����ŭ �ݺ��� �ۼ�. (�ݺ��� �� ���� ��ݰ� �ִ밪 ���ؼ� Ŭ ��� �� �� ��������� �ִ밪�� �ǵ��� �����ϱ�)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
    int x, y, z, prize, N, max = 0;
    // max�� �Է¹��� ���߿� ���� ū ���� ���ϴ� ����
    //  big�� 3���� ��� �߿� ���� ū ���� ���ϴ� ����
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf_s("%d %d %d", &x, &y, &z);
        if (x == y && x == z && y == z)
            prize = 10000 + x * 1000;
        else if (x == y || x == z)
            prize = 1000 + x * 100;
        else if (y == z)
            prize = 1000 + z * 100;   
        else {
            if (x > y && x > z)
                prize = x * 100;
            else if (y > x && y > z)
                prize = y * 100;
            else if (z > x && z > y)
                prize = z * 100;
        }
        if (prize > max)
            max = prize;
    }
    printf("%d", max);
}

