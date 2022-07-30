/*
	1. 참가하는 인원수 받기 (변수 N)
	2. N번만큼 반복문 작성. (반복문 후 최종 상금과 최대값 비교해서 클 경우 그 때 최종상금이 최대값이 되도록 설정하기)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
    int x, y, z, prize, N, max = 0;
    // max는 입력받은 수중에 가장 큰 값을 구하는 변수
    //  big는 3명의 상금 중에 가장 큰 값을 구하는 변수
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

